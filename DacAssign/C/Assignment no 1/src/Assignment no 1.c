/*
 ============================================================================
 Name        : Assignment.c
 Author      : Gokool
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/**
 * C program to sort elements of array in ascending order
 */

#include <stdio.h>
#define MAX_SIZE 100    // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
      if (arr[i]>0)
           {
               for(j=i+1; j<size; j++)
                    { if (arr[j]>0)
                        {
                            if(arr[i] > arr[j])
                            {
                                temp     = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                            }
                        }
                    else
                        j=i;
                    }
           }
     else
        i= j;
    }

    /* Print the sorted array */
    printf("\n Elements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%2d\t", arr[i]);
    }

    return 0;
}
