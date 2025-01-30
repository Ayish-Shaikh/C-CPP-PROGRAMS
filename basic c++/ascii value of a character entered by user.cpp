//7.Write a program to display the ASCII value of a character entered 

#include<stdio.h>
int main(){
	char ch;
	
	printf("enter a charcter");
	scanf("%c",&ch);
	
	printf("the ascii value of '%c' is %d\n", ch, (int)ch);
}
