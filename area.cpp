#include<stdio.h>

float area (float length,float breadth){
return length*breadth;
}
int main(){
float l,b,res;
printf("enter the length value :\n");
scanf("%f",&l);
printf("enter the breadth  value :\n");
scanf("%f",&b);
res=area(l,b);
printf("%f",res);
}

