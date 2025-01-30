//8.Write a program to demonstrate implicit and explicit type casting in C.

#include<stdio.h>
int main(){
	//impicit type casting
	int intNum = 5;
	float floatNum;
	//automatically converts int to float
	floatNum = intNum;
	
	printf("implicit type casting :\n");
	printf("integer value :%d\n",intNum);
	printf("converted to floast :%.2f\n",floatNum);
	
	// Explicit Type Casting
    float floatValue = 7.8;
    int intValue;

    // Manually converting float to int
    intValue = (int)floatValue;

    printf("\nExplicit Type Casting:\n");
    printf("Float value: %.2f\n", floatValue);
    printf("Converted to integer: %d\n", intValue);

    return 0;
}
