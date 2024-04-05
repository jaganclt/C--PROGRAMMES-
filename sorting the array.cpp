#include<stdio.h>
int main()
{
	int i,j,temp;
int arr[5];
printf("ENTER THE ELEMETS : ");
for(i=0;i<5;i++)
{
	scanf("\t%d",&arr[i]);
}
for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
	
{
		if(arr[i]>arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
}
printf("printing the array : ");
for(i=0;i<5;i++)
{
	printf("\t%d",arr[i]);
}
}
