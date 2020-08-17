/**
    [PROGRAM] : C Functions - Pass By Reference
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com> */

#include <stdio.h>
#include <stdlib.h>

// function to swap values of two variables
void swapNums(int *a, int *b);

// the main Function
int main()
{
    // local variable declaration:
    int firstNum = 12;
    int secondNum = 30;

    printf("Before swap  : \n");
    printf("Before swap , value of first Number  : %d\n",firstNum);
    printf("Before swap , value of second Number : %d\n", secondNum );

    /* calling a function to swap the values using variable reference.*/
    swapNums(&firstNum, &secondNum);

    printf("After swap:\n");
    printf("After swap , value of first Number  : %d\n",firstNum);
    printf("After swap , value of second Number : %d\n", secondNum );

    return 0;// signal to operating system everything works fine

}/** End of main function */


 /**
  function to swap values of two variables
 (user should pass address of two as parameter)*/

void swapNums(int *a, int *b)
{
    // declare temp variable
    int temp;

    temp = *a; /* save the value at address a in temp */

    *a = *b; /* put b into a */

    *b = temp; /* put a into b */

    // swap is done
}/** End of swap () */
