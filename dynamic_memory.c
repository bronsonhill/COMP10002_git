// Your code here
#include <stdio.h>
#include <stdlib.h>

// constants
#define STRINGSET_LEN 25
#define STRING_LEN 10

// prototypes
char *string_dupe(char *s);
char **string_set_dupe(char **S);
void string_set_free(char **S);
void print_string_set(char **S);
void **read_string_set(char **S);



int main(int argc, char *argv[]){
    char **str_set = (char**)malloc(STRINGSET_LEN*sizeof(char*));
    printf("Enter string set:\n");
    char str[STRING_LEN] = {0};
    int i = 0;

    read_string_set(str_set);
    

    char **dupe = string_set_dupe(str_set);
    
    print_string_set(dupe);
    string_set_free(dupe);
    
    return 0;

}

char *string_dupe(char *s){
    // get right length
    int i = 0;
    char next = s[i];
    // gets length of string
    while (next != '\0'){
        i ++;
        next = s[i];
    }
    // allocates the appropriate memory for string
    char *new_s = (char*)malloc(i*sizeof(char));
    
    // copies string to new memory
    i=0;
    next = s[0];
    while (next != '\0'){
        new_s[i] = next;
        i ++;
        next = s[i];
    }
    new_s[i] = '\0';

    return new_s;
}

char **string_set_dupe(char **S){
    // find length of string set
    int i = 0;
    char *next = S[i];
    while (next != NULL){
        i ++;
        next = S[i];
    }
    int len = i;

    char **new_ss = (char**)malloc(len*sizeof(char*));

    i = 0;
    while (i<len){
        new_ss[i] = string_dupe(S[i]);
        i ++;
    }
 
    return new_ss;
}

void **read_string_set(char **S){
    char *str;
    int i = 0;
    while (scanf("%s", str) != EOF){
        S[i] = string_dupe(str);
        i++;
    }
    S[i] = NULL;
    return;
}

void print_string_set(char **S){
    int i = 0;
    while (S[i]){
        printf("%s ", S[i]);
        i ++;
    }
    return;
}

void string_set_free(char **S){
    int i = 0;
    while (S[i]!=NULL){
        free(S[i]);
        i ++;
    }
    free(S);
    return;
}