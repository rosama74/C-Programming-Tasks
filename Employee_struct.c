#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[30];
    int age;
    char phone_no[10];
    double salary;
} Employee;
int main()
{
    //taking 20 employees employees
    int n=20;
    //printf("Enter the number of employees you want to enter : ");
    //scanf("%d",&n);
    
    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);//[^\n]

        //Age
        printf("Age: ");
        scanf("%d",&employees[i].age);

        //Phone number
        printf("Phone number (10 digits only, without dial code): ");
        scanf("%s",employees[i].phone_no);
        
        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Employee %d\n",i+1);
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Phone number \t: ");
        printf("%s \n",employees[i].phone_no);
        
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
