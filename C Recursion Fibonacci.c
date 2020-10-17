/**
    [PROGRAM] : C / (Exercise) Fibonacci Sequence
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com> */

#include <stdio.h>
#include <stdlib.h>

// Function declaration
int fib(int n);

// the  Driver Code
int main()
{
    int n, result; /* variables declaration */
    do // get valid number
    {
       // asking valid positive number from user
       printf("Enter N --> N must be bigger than zero : ");
       scanf("%d",&n);
    }while(n <= 0);
    
    result = fib(n);    // call function
    printf("%d",result); // print the result
    return 0;// signal to operating system everything works fine

}/** End of main function */


/** Recursive function to calculate Fibonacci Sequence
    assuming that n is positive integer
 */

int fib(int n)
{
    if(n <= 1) // base case
    {
        return n;
    }
    // Recursive Case
    return fib(n - 1) + fib(n - 2);
}
