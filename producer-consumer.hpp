#ifndef PRODUCER_CONSUMER_HPP
#define PRODUCER_CONSUMER_HPP

#include <semaphore.h>

const int tableMax = 2;
int *table = new int[tableMax];
sem_t filled;
sem_t empty;
sem_t mutex;
int non1 = sem_init(&filled, 1, 0);
int non2 = sem_init(&empty, 1, 2);
int non3 = sem_init(&mutex, 1, 1);
