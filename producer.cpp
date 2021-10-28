#include "producer-consumer.hpp"
#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>

int main() {
        int shmid = shmget(101, 1024, 0665 | IPC_CREAT);
        shmat(shmid, table, 0);
        int i = 0;
        do {
                sem_wait(&empty);
                sem_wait(&mutex);
                *table = 1;
                ++table;
                ++i;
                std::cout << "Producer has produced an item to the table." << std::endl;
                sem_post(&mutex);
                sem_post(&filled);
        } while (i < 8);
int non1 = shmdt(table);
int non2 = sem_destroy(&filled);
int non3 = sem_destroy(&empty);
int non4 = sem_destroy(&mutex);
}
