/*
 ============================================================================
 Name        : a3.c
 Author      : Gokool
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : Assignment3.c
 Author      : Gokool and Yogesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int array[100],arraysize,i,j,n;
	int k,sum=0;
	printf("\n Enter size of Array::");
	scanf("%d",&arraysize);
	printf("\n Enter elements of array");
	for (i=0;i<arraysize;i++)
	{
		scanf("%d",&array[i]);
	}
	/*printf("Elements are");
	for (i=0;i<arraysize;i++)
		{
			printf("\t %d",array[i]);
		}*/
	printf("\n Enter Number k to find closest sum");
	scanf("%d",&k);
	n=k;
for(n=n-1;n>=0;n--)
{
	for(i=0;i<arraysize;i++)
	{

		for(j=i+1;j<arraysize;j++)
		{
			sum=array[i]+array[j];
			if (sum == n)
			{
				printf("\n Elements closest to K are:%d and %d  ",array[i],array[j]);
			    exit(0);
			}
			else
				continue;

		}

	}
}



	return 0;
}
