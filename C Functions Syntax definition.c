/**
    [PROGRAM] : C  Functions
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

  A function is a block of code which only runs when it is called.
  we can pass data  into a function. which is known as parameters,

    Syntax
    void myFunction() {
      // code to be executed
    }
*/

#include <stdio.h>
#include <stdlib.h>

// Function declaration
void myFunction();

// Function declaration
void sayHello();

// Function declaration
void func() ;

// the main Function
int main()
{
    myFunction();    // call the function
    myFunction();    // call the function again
    myFunction();   // call the function again
    myFunction();   // call the function again

    sayHello(); // call the function

    func();  // call the function
    func();  // call the function
    func(); // call the function

     return 0;// signal to operating system everything works fine

}/** End of main function */


 /**
  Function definition
  I Create a function named my function take
  no parameter print "Hello my name is saddam" */

void myFunction()
{
    // the body of the function (definition)
   printf("Hello my name is saddam!\n");
}

/**
  Function definition
  I Create a function named sayHello take
  no parameter print "Hello " */

void sayHello()
{
    printf("Hello!\n");
}


/**
   Function definition
  I Create a function named  func take no parameter */

void func()
{
   static int i = 0; //static variable declaration
   int j = 0; //local variables declaration
   i++;  // increment i by one
   j++;  // increment j by one

   printf("i = %d  and  j = %d \n",i, j);
}
