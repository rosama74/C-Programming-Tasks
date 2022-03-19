#include <stdio.h>
int main()
{
    int marks;
    printf("Grading Program\n");
    printf("Enter marks : ");
    scanf("%d",&marks);
    if(marks<=100 && marks>=85)
    {
        printf("Grade A");
    }
    else if(marks<85 && marks>=70)
    {
        printf("Grade B");
    }
    else if(marks<70 && marks>=55)
    {
        printf("Grade C");
    }
    else if(marks<55 && marks>=40)
    {
        printf("Grade D");
    }
    else if(marks<40 && marks>=0)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid marks!");
    }
    return 0;
}
