//include the proper libraries
//include producer-consumer.hpp

int main() {
  //start by declaring shared memory, link the memory to the pointer of our array
  do {
        //lock the semaphores so only consumer.cpp can access them
        if (//empty (our semaphore tracking how many spaces in the table are empty) = 0) {
        //checks to see if the table is no longer empty, meaning the consumer waits until the table is
        //completely full before it consumes
            //table (our pointer to our array) = 0;  an arbitrary value, does not really matter
            //--table;  deincrements the pointer to previous point in array
            //--filled;  deincrements the semaphore so we know one less piece of the table is filled
            //++empty;  increments the semaphore so we know one more piece of the table is empty
            //for testing purposes we can have a cout statement telling us that the table was filled
            //cout << "Producer has added an item to the table." << endl;
        }
        //++"iterator"/"overall";  increments our overarching semaphore so we can track how many times
        //the code has been run
        //unlock the semaphores since consumer.cpp isnt currently using them
  } while (//"iterator"/"overall" is less than an arbitrary amount, for sake of testing; in a real OS,
    //it would do the code while "true", meaning it would continue forever until not needed anymore
  //finally delete/deallocate/unlink/remove the shared memory; will only execute this step once the
  //while loop has completed the set number of times
  //one logistical error I can think of with this code is that you may want the consumer to continue to
  //run in order to empty out the table fully; to do this you would just have this consumer program
  //run a few extra times to clear out whats left in the table
}
