/**
    Verify a Prime number - Trial division method

   [AUTHOR] :  Saddam Arbaa
   [Email]  : <saddamarbaas@gmail.com>

      write program to test if the given number is prime or not
      Reference
      mycodeschool
      https://youtu.be/7VPA-HjjUmU?
      */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>// include cmath function

// function to test if the number is prime
void isPrime(int num);

// the  Driver Code
int main()
{
    // variable for the number
    int num;

    // get valid number first (positive number)
    do
    {
        //asking user input
        printf("Please Enter number to Check for Prime Test  :\n"
               "remember the number must be bigger than zero : ");
        scanf("%d",&num);
    }while(num <= 0);

    // call is prime() function
    isPrime(num);

    return 0; // signal to operating system program ran fine

}/** End for loop */


/**
    function to test if the given number
    is prime number or not

    Prime numbers. Prime numbers are numbers that have only 2 factors:
    1 and themselves.(can by dived only by themselves and 1)
    For example, the first 5 prime numbers are 2, 3, 5, 7, and 11*/

void isPrime(int num)
{
    int flag = 0; // flag variable

    // one is not prime handle corner case
    if(num == 1)
    {
        printf("%d is  not prime \n",num);
        flag = 1;
    }

    /**
    start loop from 2 until num -1
    for(int i = 2; i < num - 1; i++)
    if there is any such number that can divide num  then
    num is not prime however this not efficient because the
    time complexity for this logic is linear O(N)

    can we do better ??

    yes just start loop from 2 until and run sqrt Root of num
    for(int i = 2; i < sqrt(num); i++)
    if we don get any factor of num that can divide num until sqr
    root of num then our number num  is not prime

    time complexity for this efficient approach is O sqrt(N) */

    for(int i = 2, N = sqrt(num); i <= N; i++)
    {
        // if there is any number that can divide our number(num)
        // that mean the number is not prime
        if(num % i == 0)
        {
            printf("%d is  not prime and can be divide by %d\n",num,i);
            flag = 1; // change flag to one
        }

    } /** End for loop */


    // if flag variable is still equal to zero is mean the given number is prime
    if (flag == 0)
    printf("%d  is prime number\n",num);


}/** End isPrime */
