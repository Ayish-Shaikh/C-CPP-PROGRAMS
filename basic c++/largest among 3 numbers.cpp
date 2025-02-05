#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value:-");
	scanf("%d",&a);
	printf("enter the value:-");
	scanf("%d",&b);
	printf("enter the value:-");
	scanf("%d",&c);
	if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("The largest number is: %d\n", c);
    }

}
