/**
    [PROGRAM] : C/C++ struct
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    A structure is a user defined data type in C/C++.
    Syntax of struct
    struct structureName
    {
      dataType member1;
     dataType member2;
        ...
    };  */

#include <stdio.h>
#include <stdlib.h>

//define Employee struct
typedef struct
{
    int id;        // for Employee id number
    char name[30]; // for Employee name
    float salary;    // for Employee salary
    char job [30]; // for Employee job
} Employee;

// A utility function to get Employee information
void get_Data(Employee[], int);

// A utility function to print All Employee information
void print(Employee[], int size);

// the  Driver Code
int main()
{
    // variable n declaration and initialize by 5
    int n = 2; // n is the number of employees

    Employee employees[n]; // employees array of type Employee declaration

    /* calling a function to get employees information from user.*/
    get_Data(employees, n);

    /* calling a function to print employees information .*/
    print(employees, n);

    return 0;// signal to operating system everything works fine

}/** End of main function */


// A utility function to get Employee information from user
void get_Data(Employee employees[], int size)
{
    //Taking each employee detail as input
    printf("Enter %d employee informations \n",size);
    for(int i = 0; i < size; i++)
    {
        printf("Employee number %d information\n", i+1);
        printf("Enter employee Name:");    // employee i Name
        scanf("%s",employees[i].name);

        printf("Enter employee Id: ");       // employee i ID
        scanf("%d",&employees[i].id);


        printf("Enter employee job : ");    // employee i job
        scanf("%s",employees[i].job);

        printf("Enter employee Salary: ");       // employee i Salary
        scanf("%f",&employees[i].salary);

        printf("\n"); // go new line
    }

} /** end of get_Data()*/


// A utility function to print All Employee informations

void print(Employee employees[], int size)
{
    // printing all employees information
    printf("Printing All Employees Informations \n");
    for(int i = 0; i < size; i++)
    {
        printf("Employee number %d information\n", i+1);
        printf("Name \t: ");        // printing name
        printf("%s \n", employees[i].name);

        printf("Id \t: ");         // printing ID
        printf("%d \n", employees[i].id);

        printf("Job \t: ");           // printing JOB
        printf("%s \n", employees[i].job);

        printf("Salary \t: ");          // printing salary
        printf("%.2f \n", employees[i].salary);

        printf("\n");
    }

} /** end of print()*/
