#include<stdio.h>
int main()
{
	char s[11]="softronics";
	int i=0;
int count=0;
	while (i<11) 
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("the vowels are :  %d",count);
	
	
}
