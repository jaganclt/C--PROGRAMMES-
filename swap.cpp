#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first number :");
	scanf("%d" ,&a);
	 printf("enter second number :");
	 scanf("%d" , &b);
	 c=a;
	 a=b;
	 b=c;
	 printf("After swap a=%d, b=%d \n ",a,b);
	 
	 
}
