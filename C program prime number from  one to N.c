/**
   [AUTHOR] :  Saddam Arbaa

   [Email]  : <saddamarbaas@gmail.com>

   Program to Find Prime Number between 1 to N? */

#include <stdio.h>
#include <stdlib.h>

// function to Find Prime Number between 1 to N
void isPrime(int N);

// the  Driver Code
int main()
{
    // variable for number
    int N;

    // get valid number first (positive number)
    do
    {
        //asking user input
        printf("Please Enter number to Check for Prime Test  :\n"
               "remember the number must be bigger than zero : ");
        scanf("%d",&N);
    }while(N <= 0);

    // call is prime() function
    isPrime(N);

    return 0; // signal to operating system program ran fine
}/** End for loop */


/**
    function to Find Prime Number between 1 to N
    Prime numbers. Prime numbers are numbers that have only 2 factors:
    1 and themselves.(can by dived only by themselves and 1)
    For example, the first 5 prime numbers are 2, 3, 5, 7, and 11*/

void isPrime(int num)
{
    int flag = 0; // flag variable

    // one is not prime handle corner case
    if(num == 1)
        printf("%d is  not prime \n",num);

    
    /* start outer loop from 2 until num */
    for(int i = 2; i < num; i++)
    {
        // each iteration set flag to zero
         flag = 0;
         
        /* 
         start inner loop from 2 to i  and check if there is no number 
         that can divide our cuurent number(i) that mean the number i is prime
          */
         
         for(int j = 2; j < i; j++)
         {
             if(i % j == 0)
             {
                 flag = 1; // change the flag to one
             }

        }/** End  of  inner loop */

       // if flag variable is still equal to zero is mean the  number is prime
       if (flag == 0)
       printf("%d  is prime number\n",i);

    }/** End  of  inner loop */

}/** End isPrime */
