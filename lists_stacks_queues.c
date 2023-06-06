/* linked lists, stacks and queues implementaiton
Bronson Hill, May 2023
*/

#include <stdio.h>
#include <assert.h>

// type definitions
typedef struct node node_t;
typedef int data_t;

// prototypes
list_t *make_list();


struct node {
    data_t data;
    node_t *next;
};

typedef struct{
    node_t *head;
    node_t *foot;
} list_t;


/* make empty list */
list_t *make_list(){
    list_t *list;
    list = (list_t*)malloc(sizeof(list_t*));
    return list;
}

/* is empty list */

/* free list */

/* insert at head */

/* insert at foot */

/* pop head */

/* pop tail */
