/*
 ============================================================================
 Name        : sir.c
 Author      : Rugveda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
	int no, unit, tenth;

	printf("\n Enter No1 :: ");
	scanf("%d", &no);
	if( no==0)
		printf("zero");
	else
	{
		unit= no%10;
		tenth= no/10;

		switch(tenth)
		{
			case 1:
					switch(unit)
					{
						case 0: printf(" ten");break;
						case 1+1*0: printf(" elevan"); break;
						case 2*1+0: printf(" tweleve"); break;
						case 1+1+1: printf(" thirteen"); break;
					}
				break;
			case 2: printf(" twenty"); break;
			case 3: printf(" thirty"); break;
		}
	//if(tenth!=1)
		//{
			switch(unit)
			{

				case 1: printf(" one"); break;
				case 2: printf(" two"); break;
				case 3: printf(" three"); break;
			}
		//}
	}
	return 0;
}
