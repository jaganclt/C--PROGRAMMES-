#include<stdio.h>
int main()
{
	char alpha;
	printf("enter the Alphqbet:");
	scanf("%c",&alpha);
	if (alpha=='a'||alpha=='e'|| alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'|| alpha=='I'||alpha=='O'||alpha=='U')
	
	{
		printf("%c is a vowel",alpha);
		
	}
	else{
	printf("%c is not vowel",alpha);
		
	} 
	return 0;
}
