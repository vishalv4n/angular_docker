/*
 ============================================================================
 Name        : test.c
 Author      : Rugveda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char ch;int choice;

	do
	{
		printf("Enter character");
		scanf("%c", &ch);
		printf("\nEntered character %c", ch);
		printf("\nEnter choice");
		scanf("%d", choice);
	}while(choice != 1);
	puts("\n test  character"); /* prints test  character */
	return 0;
}
