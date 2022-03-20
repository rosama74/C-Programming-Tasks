#include<stdio.h>
int find_sum(int num)
{
    int s = 0,rem;
    while(num >0)
    {
        rem = num % 10;
        s = s + rem;
        num = num / 10;
    }
    return s;
}
int main()
{
    int num;
    printf("Program to find sum of digits in a number\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    int sum = find_sum(num);
    printf("\nSum : %d", sum);
    return 0;
}
