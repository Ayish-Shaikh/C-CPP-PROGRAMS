//10.Check the difference in the results of the following two operations (in the same
//program) where y and m are two integer variables. Print the value of m in both the
//cases.
//a) y=5; b) y=7;
//m=y++; m=++y;

#include<stdio.h>
int main(){
	int y,m;
	
	    // Case 1: y = 5
    y = 5;
    m = y++; // Post-increment: m gets the value of y before incrementing
    printf("Case 1: When y = 5\n");
    printf("Value of m (y++) = %d\n", m); // m should be 5
    printf("Value of y after y++ = %d\n", y); // y should be 6

    // Reset y for the next case
    y = 5; // Reset y to 5 for the next operation

    // Case 2: y = 7
    y = 7;
    m = ++y; // Pre-increment: m gets the value of y after incrementing
    printf("\nCase 2: When y = 7\n");
    printf("Value of m (++y) = %d\n", m); // m should be 8
    printf("Value of y after ++y = %d\n", y); // y should be 8

    return 0;
}
