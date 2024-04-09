#include<stdio.h>
int main()
{
	char greetings[]="Hello world!\n ";
	printf("string :%s",greetings);
	 printf("0 th intex  number is : %c",greetings[0]);
	 
	 greetings[0] ='j';
	 printf("\nmodified string : %s",greetings);
	 
	 return 0;
	 
}
