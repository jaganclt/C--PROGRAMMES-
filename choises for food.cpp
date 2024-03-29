#include<stdio.h>
#include<stdlib.h>
int main(){
	int choice;
	char a ;
	do {
		printf("\n 1:BIRIYANI \n2:MEALS \n3:NO FOOD");
		scanf("%d",&choice);
		
		switch (choice)
		
		{
		
		case 1: printf("beef/fish \n");
		break;
		case 2: printf("veg/non-veg \n");
		break;
		case 3: exit(0);

		break;
	default :printf("Invalid choice");
	break;
		
	}
	printf("DO YOU WANT TO CONTINUE... (y/n) :");
	scanf(" %c",&a);
	
}	while(a=='y'||a=='Y');
}
