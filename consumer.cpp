#include "producer-consumer.hpp"
#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>

using namespace std;

int main() {
        int shmid = shmget(101, 1024, 0665|IPC_CREAT);
        shmat(shmid, table, 0);
        int i = 0;
        do {
                sem_wait(&filled);
                sem_wait(&mutex);
                *table = 0;
                --table;
                std::cout << "Consumer has removed an item from the table." << std::endl;
                ++i;
                sem_post(&mutex);
                sem_post(&empty);
        } while (i < 6);
int non1 = shmdt(table);
int non2 = sem_destroy(&filled);
int non3 = sem_destroy(&empty);
int non4 = sem_destroy(&mutex);
}
