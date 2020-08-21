/**
    [PROGRAM] : C  Recursion
    [AUTHOR]  :   Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    Recursive Program to print numbers from N to 1 */

#include <stdio.h>
#include <stdlib.h>

void Count_Recursively(int n); // Function declaration

int main() // the main Function
{
    int n; //variable declaration

    printf("Enter positive number N :"); // asking user input
    scanf("%d",&n);
    Count_Recursively(n);  // call the function

   return 0;// signal to operating system everything works fine

}/** End of main function */

/**  Recursive function to print Numbers from one to N */

void Count_Recursively(int n)
{
    if(n == 0) return ; /* Terminating condition(base case)*/
       printf("%d\t", n);   // print the number

     Count_Recursively(n - 1);  // Recursive call

}/** End of Count_Recursively()*/
