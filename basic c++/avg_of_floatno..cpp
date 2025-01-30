//9.Find the average of four float numbers and display the result. Take user input.

#include<stdio.h>
int main(){
	float a,b,c,d,avg;
	printf("Enter the first number :");
	scanf("%f", &a);
	printf("Enter the second number :");
	scanf("%f", &b);
	printf("Enter the third number :");
	scanf("%f", &c);
	printf("Enter the fourth number :");
	scanf("%f", &a);
	
	//calculating average value of 4 float numbers
	avg=(a+b+c+d)/4;
	printf("the average value: %.2f\n",avg);
	return 0;
}
