/**
   The Sieve of Eratosthenes (Implemented in C)
   [AUTHOR] :  Saddam Arbaa
   [Email]  : <saddamarbaas@gmail.com>

    C program to print all primes  numbers smaller than or
    equal to using n using Sieve of Eratosthenes algorithm

      References

     (1) Sieve of Eratosthenes (link to Wikipedia).
         https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
    (2)  mycodeschool
         https://youtu.be/eKp56OLhoQs */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>// include cmath function

// Sieve of Eratosthenes algorithm
void SieveOfEratosthenes(int n);

// the  Driver Code
int main()
{
    // variable N
    int n;

    // get valid number first (positive number)
    do
    {
        //asking user input
        printf("Please Enter number to Check for Prime Test  :\n"
               "remember the number must be bigger than one : ");
        scanf("%d",&n);
    }while(n <= 1);

    // call is prime() function
    SieveOfEratosthenes(n);

    return 0; // signal to operating system program ran fine

}/** End for loop */


/**
     Sieve of Eratosthenes algorithm

    function to print all the prime number between 1 to n
    using Sieve of Eratosthenes algorithm function take
    one parameters n

  algorithm
 (1) Create a list with all positive integers
     (starting from 2 as 1 is not considered prime).
 (2) Start at the first valid number(at this point all are valid)
     and eliminate all its multiples from the list.
     So start with 2, and eliminate 4, 6, 8, 10, 12 and so on.
(3)  Once all the multiples are eliminated advance to the next valid
     number(one that has not been eliminated) and repeat the process, until there are no more valid numbers to advance to.
*/

void SieveOfEratosthenes(int n)
{
     /*
      Create dynamic array of size given number n
      named "primes[0..n]" and initialize all it values
      to one to say all the numbers are prime at start*/

    int i, j; // counters

    // dynamic array
    int *primes;/* declare pointer to integers  */

    /*
     why i increment  n by 1  because i need n its self to be
     included if it prime number and this will sure me to get me
      enough memory while allocation dynamically */
      n = n + 1;

    /*
    allocate memory in heap for primes array
    dynamically using malloc function */
    primes = malloc(sizeof(int) * n);

    //start loop from zero until n
    for (i = 0; i < n; i++)
        primes[i] = 1; /* initialize all it values */
        /** End of for loop */

   /* mark number 1 and 0 as zero since are not prime*/
    primes[0] = 0; //0 is not considered prime
    primes[1] = 0; //1 is not considered prime

    //start loop from 2 until sqrt(n)
    for (i = 2; i <= sqrt(n); i++)
    {
        // If primes[i] is not changed, then it is a prime number
        if (primes[i] == 1)
        {
            /* Update all multiples of number i greater than or
               equal to the square of it numbers which are multiple
               of i and are less than i^2 are already been marked. */

             for (j = i * i; j <= n; j = j + i)
             {
                 primes[j] = 0; // your multiples of i so you cant be prime

             } /** End of inner for loop */
        } /** End of if coundition */

    } /** End of outer loop */


    // Print all prime numbers between 1 to n
    printf("prime numbers  from 1 to %d are  :\n",n);
    for (i = 2; i <= n; i++)
    {
        if(primes[i]) // only if not zero go ahead and print
        printf("%d\t",i);

    } /** End of for loop */

    // Time complexity : O(n*log(log(n)))

}/** End of SieveOfEratosthenes */
