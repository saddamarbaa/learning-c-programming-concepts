/**
    [PROGRAM] : function Parameters and Arguments
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

   we can pass data(Information) to functions as a parameter. */

#include <stdio.h>
#include <stdlib.h>

// Function declaration
void myFunction(char * name);

// Function declaration
int min(int num1, int num2);

// function declaration
int max(int num1, int num2);

// the main Function
int main()
{
   // local variable declaration:
   int x = 1;
   int y = 2;
   int m, n;

   // calling a function to get max value.
   m = max(x, y);
   printf("Max value is : %d\n", m);

  // calling a function to get min value.
   n =  min(x, y);
   printf("Min value is : %d\n", n);

    // call the function 5 times
    myFunction("Jhon");
    myFunction("Liam");
    myFunction("Adam");
    myFunction("Ali");
    myFunction("Mr Bob");

     return 0;// signal to operating system everything works fine

}/** End of main function */


// void Function definition

void myFunction(char * name)
{
    // the body of the function (definition)
    printf("Hello dear : %s\n", name );
}

// function returning the max between two numbers
int max(int num1, int num2)
{
   // local variable declaration
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result; // return max
}

// function returning the min between two numbers
int  min(int num1, int num2)
{
   // local variable declaration
   int result;

   if (num1 < num2)
      result = num1;
   else
      result = num2;

   return result; // return min
}
