# OS-Programming-Assignment-1
**This code was compiled with g++ in a Linux terminal and requires the pthread library.**
# Getting Started:
You can either clone this repo or directly copy+paste this code.\
All the proper include statements are in each file.\
 \
To compile and run this code, you will need to three commands:\
**g++ producer.cpp -pthread -lrt -o producer**\
**g++ consumer.cpp -pthread -lrt -o consumer**\
**./producer & ./consumer &**
# Purpose:
This code is an example of the Producer-Consumer problem, solved by using pthreads, semaphores, mutual exclusion, and shared memory.
# Output:
The output for this code should look like this:
```
Producer has produced an item to the table.
Producer has produced an item to the table.
Consumer has consumed an item from the table.
Producer has produced an item to the table.
Consumer has consumed an item from the table.
Producer has produced an item to the table.
Consumer has consumed an item from the table.
Producer has produced an item to the table.
Consumer has consumed an item from the table.
Producer has produced an item to the table.
Consumer has consumed an item from the table.
Consumer has consumed an item from the table.
```
And should automatically end without any user interference.\
However, this version of the code outputs this:
```
Producer has produced an item to the table.
Producer has produced an item to the table.
                                           
```
And requires a manual exit (Ctrl + C) to end running the program.
# Explanation:
**Here's what I think is wrong with my code.**\
*1: Semaphore issue:*\
One of two things may be wrong with my semaphores. Firstly, I may be declaring them incorrectly. I have them declared and initialized in my header file, using sem_init to give them a starting value. However, to refute this, the code does compile and the producer successfully produces 2 items. Secondly, I may not be using the semaphores correctly. I know sem_open() can open an already existing semaphore, and that may be required at the beginning of each process before modifying the shared memory, but I believed that since I already initilized them in my header file, I would not need sem_open().\
*2: Shared Memory issue:*\
Documentation on shared memory is strange. It is extremely thorough and there are many functions in the shared memory library, however there is minimal explanation as to where certain aspects of shared memory function parameters; where they come from, what they mean, if their value is arbitrary or exact. I ended up using shmid() and shmat() in my functions and called shmdt() to remove it once my programs no longer needed the shared memory. There could be anything wrong, from my choice of what I use as shared memory to how I declare it to even where I declare it.\
As I believe these could be the possible issues with my code that cause it to give the incorrect output, I also believe that to fix my code is beyond my understanding. I believe the issues stretch beyond my understanding of shared memory and semaphores, and would take longer than a timely manner to truly grasp and fix the problem. I hope this footnote got across the point that, while in practice my code does not work and does not give the correct output, in theory I understand what is required to properly solve the Producer-Consumer problem, what each individual part of the code does and how it is supposed to work.
