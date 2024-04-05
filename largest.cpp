#include<stdio.h>
int main()
{
int array[]={10,20,30,40,50,60};
int i, max=0;
for(i=0;i<6;i++)
{
	if (array[i]>max)
	{
	max=array[i];
	}
	
}
printf("Largest number is :%d",max);


}

