/**
   [PROG]	      :  Scope of Variables in C
   [AUTHOR]		   :  Saddam Arbaa
   [Email]       : <saddamarbaas@gmail.com>

   Local , Global variables , Const , Automatic and Static   */


#include <stdio.h>

#include <stdlib.h>

void func();

/* global variables definition and initialization */
int x = 200, y = 220;

int main()
{
    // changing value of global x  and  y variable from main function
    x = 333;
    y = 4444;

    //print Global variable  x
    printf("Print Global variable  x  = %d\n",x);
    //print Global variable  y
    printf("Print Global variable  y  =  %d\n",y);

    /* local variables x ,and Y definition and initialization in main function
       local variable with same name as that of global variable
     */

    int x = 100, y = 120;

    /* local variable declaration in main function */
    int aa = 10;
    int bb = 20;
    int cc = 30;

    //print local variable x
    printf("Print local variable  x   = %d \n",x);
    //print local variable  y
    printf("Print local variable  y   = %d\n",y);

    //print local variable aa
    printf("Print local variable  aa   = %d\n",aa);
    //print local variable  bb
    printf("Print local variable  bb   = %d\n",bb);
    //print local variable  cc
    printf("Print local variable  cc   = %d\n", cc);

    {
         // declaring and initializing  variables x and y inside block

          /*
            variables x and  declared in this block is
            completely different from variable
            declared outside.
         */

          int x = 5, y = 15;
          //print local variable x which is in this bloock
          printf("Print local variable(inside block)  x  =  %d\n",x);

          //print local variable  y  which is in this bloock
          printf("Print local variable (inside block) y  =  %d\n",y);


    }/** End of block */

    // call func() function
     func();

    // signal to operating system everything works fine
    return 0;

}/** End of main*/

void func()
{

    //print Global variable  x
    printf("Print global variable  x  from inside func() function   =  %d\n",x);
    //print Global variable  y
    printf("Print global variable  y  from  inside func() function   = %d\n",y);

    // declaring and initializing local variables x and y inside function
     /*this variable is local to the function func() and cannot be
      accessed outside this function */
     int x = 2, y = 3;

      //print local variable  x
      printf("Print local variable  x  from inside func() function =  %d\n",x);
      //print local variable  y
      printf("Print local variable  y  from  inside func() function  = %d\n",y);

}/** End of func() */

