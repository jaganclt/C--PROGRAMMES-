#include<stdio.h>
int main()
{
	float fare,cel;
	printf("enter the farenheat : ");
	scanf("%f",&fare);
	cel=(fare-32)*5/9;
	printf("farenheat is %f ",cel);
	return 0;
}
