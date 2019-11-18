/*
 ============================================================================
 Name        : size.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void) {
	int n=15;
	char ch='A';
	printf("\n size of int %%d %d %d to %d",sizeof(int),INT_MIN,INT_MAX);
	printf("\n size of n=%d",sizeof(n));
	printf("\n size of short=%d",sizeof(short));
	printf("\n size of long=%d",sizeof(long));
	printf("\n no1=%x",0100);//octal to hex
	printf("\n no1=%x",100);//decimal to hex
	printf("\n no1=%o",100);//decimal to octal
	printf("\n no1=%o",0x100);//hex to octal
	printf("\n no1=%d",0100);//octal to decimal
	printf("\n no1=%d",0x100);//hex to decimal
	printf("\n size of ch=%d",sizeof(ch));
	printf("\n size of char=%d",sizeof(char));
	printf("\n size of A=%d",sizeof('A'));
	return 0;
}
