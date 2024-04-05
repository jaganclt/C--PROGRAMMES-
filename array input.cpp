#include<stdio.h>
int main()
{ 
 int i,array[6];
 printf("enter the numbers :");
 
 for( i=0;i<6;i++)
 {
 	scanf("%d",&array[i]);
 }
 printf("the array is.....");
	for( i=0;i<6;i++)
	{
	printf("%d\n",array[i]);
	}

}
