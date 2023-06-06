/* polymorphism implementation
*/

#include <stdio.h>

/* sort with function pointers */
int sort(int x1, int x2, int (*F)(void*, void*));
int int_sort(void* x1, void* x2);


int main(int argc, char *argv[]){
    int x1 = 12;
    int x2 = 7;
    printf("%d\n", sort(x1, x2, int_sort));

    return 1;
}


int sort(int x1, int x2, int (*F)(void*, void*)){

    return F(&x1, &x2);
}

int int_sort(void* x1, void* x2){
    if (x1 > x2){
        return 1;
    }
    return 0;
}