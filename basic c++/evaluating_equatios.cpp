//6. Write C program to evaluate each of the following equations: i) v = u+at ii) s = ut + 1/2at 2 where v, u, a, t, s are
//variable.

#include<stdio.h>
int main(){
	float u,v,a,t,s;
	printf("enter the initial velocity  in m/s---" );
	scanf("%f", &u);
	printf("enter the acceleration in m/s^2---" );
	scanf("%f", &a);
	printf("enter the time in s---" );
	scanf("%f", &t);
	
	v=u+(a*t);
	s=(u*t)+(0.5*a*t*t);
	
	printf("the value of v%f\n", v);
	printf("the value of s%f\n", s);
	
	return 0;
}  

