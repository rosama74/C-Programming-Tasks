#include<stdio.h>
int main()
{
    int arr[3][3],i,j,d_sum=0;
    printf("Program to perform basic operations on a three dimensional array\n");
    printf("Enter the elements row wise : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element [%d][%d] : ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe array is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
            if(i==j)
            {
                d_sum += arr[i][j];
            }
        }
        printf("\n");
    }
    d_sum = d_sum + arr[0][2] + arr[2][0];
    printf("\nSum of diagonal elements : %d", d_sum);
    return 0;
}
