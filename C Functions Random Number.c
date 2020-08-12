/**
  [AUTHOR] :  Saddam Arbaa

  [Email]  :  <saddamarbaas@gmail.com>

 C  program to generate Random Number in a given range */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // call time  header file

// generate Random Number in a given range
int RandomNumber(int min, int max);

int main()
{// variable for min  and max
    int min,max;

    // ask user input
    printf("Enter min value : ");
    scanf("%d",&min);

     printf("Enter max value : ");
     scanf("%d",&max);

    // call RandomNumber() function
    int num =  RandomNumber(min, max);

    // print the number
    printf("the Random number you got is : %d\n",num);

     return 0;// signal to operating system everything works fine

}/** End of main function */



/**
   Function to generate Random number in range [min, max].
 */

int RandomNumber(int min, int max)
{

    // Use current time as seed for random generator
    // also can be srand(time(NULL));
    srand(time(NULL));

    // get the random number first
    int ran = rand();

     /**
     Formula for calculation random number in range
    num = (rand() % (upper – lower + 1)) + lower */

     int num =  ran % (max - min + 1) + min;

     return num; // return num to where is been called

}/** End of RandomNumber() */

