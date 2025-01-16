//4. Write a C program to calculate area and circumference of a circle.
// Take user input using scanf().
//circumference=2*3.14*r
//area=3.14*r*r

#include<stdio.h>
int main(){
	float a,c,r;
	printf("Enter the value of r:-");
	scanf("%f",&r);
	c=(2*3.14*r);
	a=(3.14*r*r);
	printf("The Value of c%f",c);
	printf("The Value of a%f",a);
	return 0;
}
