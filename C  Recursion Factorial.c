
/**
    [PROGRAM] : C  Recursion
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    Factorial Program using Recursion */

#include <stdio.h>
#include <stdlib.h>

int factorial(int); // Function declaration

int main()// the main Function
{
    int n, fact; //variable declaration

    printf("Enter positive number N :"); // asking user input
    scanf("%d",&n);
    fact = factorial(n); // call the function
    printf("Factorial of a number %d is %d ",n,fact); // print the result

     return 0;// signal to operating system everything works fine

}/** End of main function */

/** Recursive function to calculate Factorial of Number */
int factorial(int n)
{
    if(n == 1) return 1; /* Terminating condition(base case)*/

     return  (n * factorial(n - 1));  ; //Recursive call

}/** End of fact */
