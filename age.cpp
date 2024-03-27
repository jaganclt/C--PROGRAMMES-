#include<stdio.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	(age>=18)?printf("eligible for voting"):printf("better luck next time");
	return 0;
}
