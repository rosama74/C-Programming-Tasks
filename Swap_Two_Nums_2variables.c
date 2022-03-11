#include <stdio.h>
int main()
{
  int a,b;
  printf("Swapping two numbers without using third variable\nUsing two variables 'a' and 'b'.\n");
  printf("\nEnter value for a : ");
  scanf("%d",&a);
  printf("\nEnter value for b : ");
  scanf("%d",&b);
  printf("\nBefore Swapping\n");
  printf("a = %d\nb = %d\n",a,b);
  a = a - b;
  b = a + b;
  a = b - a;
  printf("\nAfter Swapping\n");
  printf("a = %d\nb = %d\n",a,b);
  return 0;
}
