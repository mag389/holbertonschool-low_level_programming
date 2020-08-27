#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int arraya[] = {
        0, 1, 2, 5, 5, 5, 6, 6, 7, 8, 9
    };
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    int arrayc[] = {1, 3, 4, 5, 5, 5, 5, 5, 7, 9, 11};
    int arrad[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t sizd = sizeof(arrad) / sizeof(arrad[0]);
    size_t size = sizeof(array) / sizeof(array[0]);
    size_t sizea = sizeof(arraya) / sizeof(arraya[0]);
    size_t sizc = sizeof(arrayc) / sizeof(arrayc[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n\n", 999, advanced_binary(array, size, 999));
 
    printf("Found %d at index: %d\n\n", 8, advanced_binary(arraya, sizea, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(arraya, sizea, 5));
    printf("Found %d at index: %d\n\n", 999, advanced_binary(arraya, sizea, 999));

    printf("Found %d at index: %d\n\n", 5, advanced_binary(arrayc, sizc, 10));

    printf("Found %d at index: %d\n\n", 2, advanced_binary(arrad, sizd, 2));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(arrad, 5, 5));
    printf("Found %d at index: %d\n", 999, advanced_binary(arrad, sizd, 999));
   return (EXIT_SUCCESS);
}
