#include<stdio.h>
int main()
{ 
 int array[]={10,20,30,40,50,60,70};
 printf("%d",array[0]);
 array[0]=15;
 printf("\n%d",array[0]);
 
 for(int i=0;i<6;i++)
 {
 	printf("\n%d",array[i]);
 }
	
}
