/**
  [AUTHOR] :  Saddam Arbaa

  [Email]  :  <saddamarbaas@gmail.com>

     C program  to generate Random Number between 1 to 20 */

#include <stdio.h>
#include <stdlib.h>

void RandomNumber();

// the  Driver Code
int main()
{
    // call RandomNumber() function
    RandomNumber();

     return 0;// signal to operating system everything works fine

}/** End of main function */


/**
   Function to generate Random Numbers from 1 to 20
 */

void RandomNumber()
{
    // counter
    int i = 0;
    //variable to store the random numbers
    int randomNumber;
    // iterate as long as condition is true
    while(i <= 20)
    {
        /*
        rand()function generate random number between 0 to biggest
        number in my system so here I use modl operator to get random
        numbers only from 0 to 19 (randomNumber =  rand() % 20)
        Because modl operator will get me only numbers from zero to 19
        and 20 will not be include
        for i have to incremented randomNumber by one(randomNumber = 1+ rand() % 20;)
        now I will get number from 1 to 20 and 20 will be included
        */

        randomNumber = 1 + rand() % 20;//random number from 1 to 20

        printf("%d\n",randomNumber); // print the numbers

        i++;// increment the counter
    }
}/** End of RandomNumber() */

