/**
    [PROGRAM] : C  Recursion
    [AUTHOR]  :   Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    
    Recursive Program to print numbers between given two numbers */

#include <stdio.h>
#include <stdlib.h>

void CountFromTo(int n, int); // Function declaration

int main() // the main Function
{
    int star, end; // variable declaration

    printf("Enter start number :"); // asking user input
    scanf("%d",&star);
    printf("Enter end number :"); // asking user input
    scanf("%d",&end);
    CountFromTo(star, end);  // call the function

   return 0;// signal to operating system everything works fine

}/** End of main function */


/**  
    Recursive function to print Numbers 
    between given two numbers by user */

void CountFromTo(int start, int end)
{
    if(start ==  end) return ; /* Terminating condition(base case)*/
       printf("counter =  %d\n",start);   // print the number

    // decrement start and recusive call again
     CountFromTo(start + 1, end);  // Recursive call

}/** End of Count_Recursively()*/
