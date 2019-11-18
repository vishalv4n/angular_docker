/*
 ============================================================================
 Name        : no.c
 Author      : Rugveda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("enter the number:",a);
	scanf("%d",&a);
	int T,U;
	T=a/10;
	U=a%10;
	switch (T)
	{
	case 1:
		switch(U)
		{
		case 0:printf("ten");break;
		case 1:printf("eleven");break;
		case 2:printf("twelve");break;
		case 3:printf("thirteen");break;
		case 4:printf("fourteen");break;
		case 5:printf("fifteen");break;
		case 6:printf("sixtenn");break;
		case 7:printf("seventeen");break;
		case 8:printf("eighteen");break;
		case 9:printf("ninteen");break;
		}break;
	case 2:printf("twenty");break;
	case 3:printf("thirty");break;
	case 4:printf("fourty");break;
	case 5:printf("fifty");break;
	case 6:printf("sixty");break;
	case 7:printf("seventy");break;
	case 8:printf("eighty");break;
	case 9:printf("ninty");break;
	}
	switch(U)
	{
		case 1:printf("one");break;
		case 2:printf("two");break;
		case 3:printf("three");break;
		case 4:printf("four");break;
		case 5:printf("five");break;
		case 6:printf("six");break;
		case 7:printf("seven");break;
		case 8:printf("eight");break;
		case 9:printf("nine");break;
	}
}
