//Write a C program to perform addition, subtraction, division and multiplication of two numbers. Take user input
//using scanf().


#include<stdio.h>
int main(){
	float a,b,s,su,m,d;
	printf("Enter the value of a--",a);
	scanf("%f",&a);
	printf("Enter the value of b--",b);
	scanf("%f",&b);
	s=(a+b);
	su=(a-b);
	m=(a*b);
	d=(a/b);
	printf("the value of s%f\n",s);
	printf("the value of su%f\n",su);
	printf("the value of m%f\n",m);
	printf("the value of d%f\n",d);
}
