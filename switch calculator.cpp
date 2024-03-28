#include<stdio.h>
int main()
{
	char opera;
	printf("enter a operator (+,-,*,/)");
	scanf(" %c",&opera);
	int a,b;
	printf("enter 2 numbers :");
	scanf("%d%d",&a,&b);
	switch(opera)
	{
	
	case '+':
		printf("sum is %d",a+b);
		break;
		case '-':
		printf("sub is %d",a-b);
		break;
		case '*':
		printf("multile is %d",a*b);
		break;
		case '/':
		printf("divide is %d",a/b);
		break;
		default:printf("invalid");
		break;
	
}
return 0;
}
