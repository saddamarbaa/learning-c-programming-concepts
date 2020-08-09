/**
   [AUTHOR] :  Saddam Arbaa
   [Email]  :  <saddamarbaas@gmail.com>

   write program to calculate the flowing  math series
    y = 1 + x/1! + x^2/2! + x^3/3! + X^4/4!+ .........x^N/N!
   and N will be entered by user
    Reference :
    https://youtu.be/_vTWN2iXUxY
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h> // include math function

// the  Driver Code
int main()
{
    int i, j, N ;
    float factorial,y,x ;

    /*let say x=3 for example*/
     x =3;

     /*set y by 1*/
     y = 1.0;

    /*read value of N*/
    printf("Enter the value of N: ");
    scanf("%d",&N);

    /*calculate  the series*/
    for(i = 1; i < N; i++)
    {
       /*set factorial by 1*/
        factorial = 1.0;

         for(j = 1; j <= i; j++)
         {
             // calculate factorial
              factorial = factorial * j;
         } /** End of inner loop*/

         // calculate y value
         y = y + pow(x,i) / factorial;

    }/** End of outer loop*/

    /*print the result*/
    printf("Result of the series is : %.2f\n",y);

     return 0;// signal to operating system everything works fine

}/** End of main function  */
