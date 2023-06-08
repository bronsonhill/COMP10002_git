/* linked lists, stacks and queues implementaiton
Bronson Hill, May 2023
*/

#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "dict.h"


/* make empty list */
list_t *make_llist(){
    list_t *list;
    list = (list_t*)malloc(sizeof(list_t*));
    return list;
}


/* read a list of integers into an array, returns number of items read */
int read_int_arr(int *arr){
    int i;
    char c;

    while ((c = getchar()) != EOF){
        if (isdigit(c))
        arr[i] = '0' - c;
    }

    return i;
}

/* read a list of characters into an array, returns number of chars read */
int read_char_arr(char *arr){
    int i = 0;
    char c;

    printf("Enter characters:\n");

    while ((c = getchar()) != '\n'){
        arr[i] = c;
        i ++;
    }
    arr[i] = '\0';

    printf("%d characters read.\n", i);

    return i;
}

void print_char_arr(char *arr, int n){
    int i = 0;
    printf("character array:\n");

    while (i < n){
        printf("%c ", arr[i]);
        i ++;
    }

    printf("\n");
}


/* is empty list */

/* free list */

/* insert at head */

/* insert at foot */

/* pop head */

/* pop tail */
