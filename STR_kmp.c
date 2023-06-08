/* Author: Bronson Hill, 2023
A demonstration of the KMP string search algorithm.
The KMP string search algorithm preprocesses the text to produce a failure function.
This failure function gives the number of indexes that can be skipped when making comparisons.
eg.
    0 1 2 3 4 5 6 7
    A B A B B A B A
   -1 0 1 2 0 1 2 3


Quick Compile:
gcc -c STR_kmp.c -o kmp.o
gcc -c dict.c -o dict.o
gcc kmp.o dict.o -o p
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dict.h"

#define STR_LEN 10

/* function prototypes*/
void F(char *pattern, int *failure_f);
void print_int_list(int *list);
void print_char_list(char *list);
int kmp(char *pattern, int *failure_f, char *key);


int main(int argc, char *argv[]){

    char *pattern = (char*)calloc(STR_LEN, sizeof(int));
    printf("Enter a string of length %d\n", STR_LEN);

    if (read_char_arr(pattern) != STR_LEN){
        printf("INCORRECT LENGTH\n");
        return 1;
    }

    int failure_f[STR_LEN];
    F(pattern, failure_f);
    print_char_list(pattern);
    print_int_list(failure_f);

}
/* produces failure function / prefix table, used to determine which 
index to skip to when making string comparisons */
void F(char* pattern, int *failure_f){
    int prefix_len = 0, matches = 0;
    // set intitial values of failure_f
    failure_f[0] = -1;
    failure_f[1] = 0;

    // iterate through proper prefixes, starting from 3rd character
    int i = 2;
    while (i < STR_LEN-1){
        printf("cmp %c & %c\n", pattern[0+prefix_len], pattern[i]);

        // when next letter of prefix matches next letter of suffix
        if (pattern[prefix_len]==pattern[i]){
            prefix_len++;

        // still need to test if a smaller prefix matches the suffix
        } else {
            while ((prefix_len --) != 0){
                // tests end of suffix with end of smaller prefix
                printf("2. cmp %c & %c\n", pattern[prefix_len], pattern[i]);
                if (pattern[prefix_len]==pattern[i]){
                    matches++;
                } else {
                    matches = 0;
                }
            }
            prefix_len = matches;
            printf("matches: %d\n", matches);
            matches = 0;
        }
        failure_f[i] = prefix_len;
        i ++;
    }
    return;
}


int kmp(char *pattern, int *failure_f, char *key){

    return 1;
}


// other functions used
void print_int_list(int *list){
    int i = 0;
    printf("Failure:   ");
    while (i < STR_LEN){
        printf(" %d", list[i]);
        i++;
    }
    printf("\n");
    return;
}

void print_char_list(char *list){
    int i = 0;
    printf("Pattern:    ");
    while (i < STR_LEN){
        printf(" %c", list[i]);
        i++;
    }
    printf("\n");
    return;
}