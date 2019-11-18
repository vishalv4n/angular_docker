/*
 ============================================================================
 Name        : if.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	if(0,8,0)// ~if(0) falls
		printf("\nhello");
		else
		printf("\nbye bye");

	if(0,8,0+1)// ~if(1) (nonzero value)
		printf("\nhello");
		else
		printf("\nbye bye");

	if(0,8,-1)//~if(-1) (nonzero value)
		printf("\nhello");
		else
		printf("\nbye bye");
	if(0,8,1)//
			printf("\nhello");
			else;//else terminate
			printf("\nbye bye");

	if(0,8,1)
	{
				printf("\nhello");
				break;//break statement not use in if
	}
				else//else terminate
				printf("\nbye bye");
}
