#include<stdio.h>
int main(){
	int num1,num2,a,b,c,d;
	
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	
	a = num1+num2;
	b = num1-num2;
	c = num1*num2;
	d = num1/num2; 
	
	printf("Addition of two numbers is: %d\n",a);
	printf("Substraction of two numbers is: %d\n",b);
	printf("Multiplicationtion of two numbers is: %d\n",c);
	printf("Division of two numbers is: %d\n",d);
	
	return 0;
}
