/**
    [PROGRAM] :  The Return Keyword
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com> */

#include <stdio.h>
#include <stdlib.h>

// Function declaration
int SUM(int a, int b) ;

// Function declaration
int SUB(int a, int b) ;

// Function declaration
int MUL(int a, int b) ;

// the main Function
int main()
{
    //variables declaration
    int num1 = 15;
    int num2 = 5;

    int sum = SUM(num1, num2); // call the SUM function
    int sub = SUB(num1, num2); // call the SUB function
    int mult = MUL(num1, num2); // call the MUL function

    // print the values
    printf("The sum is :  %d\n",sum);
    printf("The Multiplication is  : %d \n",mult);
    printf("The subtraction is  :  %d \n",sub);

    return 0; // signal to operating system program ran fine

}/** End of main function */

// function to calculate sum and returned
int SUM(int a, int b)
{
    int s = a + b;

    // method using the return
    // statement to return a value
    return s;
}

// function to calculate subtraction and returned
int SUB(int a, int b)
{
    int s = a - b;

    // method using the return
    // statement to return a value
    return s;
}

// function to calculate Multiplication and returned
int MUL(int a, int b)
{
    int s = a * b;

    // method using the return
    // statement to return a value
    return s;
}
