#include<stdio.h>
int find_lcm(int a, int b)
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
int main()
{
    int num1, num2, lcm;
    printf("Program to find LCM\n");
    printf("Enter two numbers to find LCM of : ");
    scanf("%d%d", &num1, &num2);
    lcm = find_lcm(num1,num2);
    printf("\nLCM of %d and %d is: %d", num1, num2, lcm);
    return 0;
}
