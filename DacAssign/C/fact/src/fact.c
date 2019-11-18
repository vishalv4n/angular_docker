/*
 ============================================================================
 Name        : fact.c
 Author      : Rugveda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int);
int main(void)
{
int a,fact;
printf("enter the no:");
scanf("%d",&a);
fact=factorial(a);
printf("factorial of %d is %d",a,fact);
return 0;
}
int factorial(int a)
{ int f=0;
	if(a>0)
	 f=a*factorial(a-1);
	else
	{ return 1;
	}

	return f;
}
