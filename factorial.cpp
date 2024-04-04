#include<stdio.h>
int main()
{
	int a,fact=1;
	printf("Enter the integi : ");
	scanf("%d", &a);
	for (int i=1;i<=a;i++)
	fact=fact*i;
	printf ("The factorial of : %d",fact);
}
