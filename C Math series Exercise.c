/**

   [AUTHOR] :  Saddam Arbaa
   [Email]  :  <saddamarbaas@gmail.com>

   calculate the flowing  math series
   y = 1 - x ^2 + x ^3 + x ^4 + ... x^N
   and N will be entered by user */

#include <stdio.h>
#include <stdlib.h>

// the  Driver Code
int main()
{
    int i, j, x, y, N, sum ;

    /*set sum by 0*/
    sum = 0;

    /*set x by 2*/
    x = 2;

    /*read value of N*/
    printf("Enter the value of N: ");
    scanf("%d",&N);

    /*calculate sum of the series*/
    for(i = 2; i <= N; i++)
    {
        // calculate sum
        sum = sum + pow(x,i);
    }
    // calculate y value
    y = 1 - sum;

    /*print the sum*/
    printf("Result of the series is : %d\n",y);

     return 0;// signal to operating system everything works fine

}/** End of main function  */
