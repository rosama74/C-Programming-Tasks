#include <stdio.h>
int main()
{
    int choice;
    printf("Order Menu\n\n");
    printf("1. Pizza                    Rs. 239\n");
    printf("2. Burger                   Rs. 129\n");
    printf("3. Pasta                    Rs. 179\n");
    printf("4. French Fries             Rs. 99\n");
    printf("5. Sandwich                 Rs. 149\n\n\n");
    printf("Enter choice : ");
    scanf("%d",&choice);
    printf("\nYour Order is :-\n");
    printf("------------------");
    switch(choice)
    {
        case 1: printf(" Pizza Rs. 239 ");
        break;
        case 2: printf(" Burger Rs. 129 ");
        break;
        case 3: printf(" Pasta Rs. 179 ");
        break;
        case 4: printf(" French Fries Rs. 99 ");
        break;
        case 5: printf(" Sandwhich Rs. 149 ");
        break;
        default: printf(" @ INVALID INPUT @ ");
        break;
    }
    printf("------------------");
    return 0;
}
