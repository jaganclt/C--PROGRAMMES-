#include<stdio.h>
int main()
{
int n,rev=0,rem,temp;
printf("Enter the number : ");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(temp==rev)
{
printf("The num is palindrome \n");
}
else
{
printf("Not palindrome");
}

}

