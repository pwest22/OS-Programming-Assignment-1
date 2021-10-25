#include the proper libraries

#since I wanted to do a dynamic array with a pointer, I would declare something like:
int tableMax = 2;
int *table = new int[tableMax];
#then you would declare the semaphores, and I believe they would be declared here since both files would
#use them?
#first semaphore would be something like "iterator" or "overall", used to mutually exclude and to keep
#track of how many times the table is accessed
#second semaphore would be "filled", to keep track of how many spaces in the table are filled; would be
#initialized to 0 since there are no items in the table
#third semaphore would be "empty", to keep track of how many spaces in the table are empty; would be
#initialized to 2 since the table is completely empty
