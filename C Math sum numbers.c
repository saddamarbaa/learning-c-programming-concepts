/**
    sum of all natural numbers from 1 to N

   [AUTHOR] :  Saddam Arbaa
   [Email]  :  <saddamarbaas@gmail.com>

  This program will print the sum of all natural
  numbers from 1 to N. */

#include <stdio.h>
#include <stdlib.h>

// the  Driver Code
int main()
{
    int i, N, sum;

    /*read value of N*/
    printf("Enter the value of N: ");
    scanf("%d",&N);

    /*set sum by 0*/
    sum = 0;

    /*calculate sum of the series*/
    for(i= 1;i <= N; i++)
        sum = sum + i;

    /*print the sum*/
    printf("Sum of the series is: %d\n",sum);

     return 0;// signal to operating system everything works fine

}/** End of main function */
