/**
    [PROGRAM] :  C  Pointers
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

     Program to Illustrate Pointers in C
     Pointers is a variable that stores the memory address as its value.
     so we can say that A pointer is a variable whose value is the
     address of another variable.
     Pointers can be created with the * operator.

     Syntax
     type *var-name;   */

#include <stdio.h>
#include <stdlib.h>

// the main Function
int main()
{
    // A num variable of type int
    int num = 23;

    //  A pointer variable, with the name ptrn,
    //  that stores the address of num
    int * ptrn = &num;

    // Output the value of num (23)
    printf("num value is  :  %d\n", num);

    // Output the memory address of num (0x79fdcc)
    printf("num memory address is : %p\n",&num);
    printf("num memory address is : %p\n",ptrn);

    // Access the memory address of num and output its value (23)
    printf("num value using pointer is  : %d\n", *ptrn);

    // (Dereference) Change the value of the pointer
    *ptrn = 3;

    // Output the new value of the pointer (3)
    printf("new num value is  : %d\n", num);

     // A food variable of type string(char *)
    char * food = "fish";

    // A pointer variable, with the name fptr,
    //  that stores the address of food
    char ** fptr = &food;

    // Output the value of food (fish)
    printf("food value is  : %s\n",food);

    // Output the memory address of food (0x6dfed4)
    printf("food memory address is : %p\n",&food);
    printf("food memory address is : %p\n",fptr);

    // Access the memory address of food and output its value (fish)
    printf("food value using pointer is  : %s\n", *fptr);

    // (Dereference) Change the value of the pointer
    *fptr = "Pizza";

    // Output the new value of the pointer (Pizza)
    printf("new food value is  : %s\n",food);

    // A dnum variable of type double
    double dnum = 99.90;

    // A pointer variable, with the name ptrd,
    //  that stores the address of dnum
    double * ptrd = &dnum;

    // Output the value of dnum (99.90)
    printf("dnum value is  : %.2f\n",dnum);

    // Output the memory address of dnum (0x79fdc0)
    printf("dnum memory address is : %p\n", &dnum);
    printf("dnum memory address is : %p\n", ptrd);

    // Access the memory address of dnum and output its value (99.90)
    printf("dnum value using pointer is  : %.2f\n", *ptrd);

    // (Dereference) Change the value of the pointer
    *ptrd = 299.90;

    // Output the new value of the pointer (299.90)
    printf("the new dnum value is  : %.2f\n", dnum);

    return 0;// signal to operating system everything works fine

}/** End of main function */
