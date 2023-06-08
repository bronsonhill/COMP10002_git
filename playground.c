/*

easy compile:
gcc -c playground.c -o main.o
gcc -c dict.c -o dict.o
gcc main.o dict.o -o p

*/

#include "dict.h"
#include <stdlib.h>


int main(int argc, char *argv[]){
    char *arr = (char*)malloc(1000 * sizeof(char));

    int n = read_char_arr(arr);
    print_char_arr(arr, n);


}