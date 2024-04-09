#include<stdio.h>
int main()
{
	int arr[]={10,20,45,34,13};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=34;
	int result=-1;
	for(int i=0;i<5;i++)
	if(arr[i]==key)
	{
		result=i;
		break;
	}
	if(result==-1)
	{
		printf("item is not found");
	}
	else
	{
		printf("item found at %d",result);
	}
}
