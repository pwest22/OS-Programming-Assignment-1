//include the proper libraries
//include producer-consumer.hpp

int main() {
  //start by declaring shared memory, link the memory to the pointer of our array
  do {
        if (//filled (our semaphore tracking how many spaces in the table are full) < tableMax) {
        //checks to see if any point in the table is empty or not, will stop once it produces the
        //maximum amount the table can hold
            //table (our pointer to our array) = 1;  an arbitrary value, does not really matter
            //++table;  increments the pointer to next point in array
            //++filled;  increments the semaphore so we know one piece of table is filled
            //--empty;  deincrements the semaphore so we know one less piece of the table is empty
        }
        //++"iterator"/"overall";  increments our overarching semaphore so we can track how many times
        //the code has been run
  } while (//"iterator"/"overall" is less than an arbitrary amount, for sake of testing; in a real OS,
    //it would do the code while "true", meaning it would continue forever until not needed anymore
  //finally delete/deallocate/unlink/remove the shared memory, will only execute this step once the
  //while loop has completed the set number of times
}
