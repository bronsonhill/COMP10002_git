// Your code here
#include <stdio.h>

#define MAX_FILES 10
#define MAX_CHARS 1000

/* prototypes */
void append_to_files();
void merge_files();

int main(int argc, char *argv[]){
    int i = 0, j = 0;
    char c[MAX_CHARS];
    FILE *fps[MAX_FILES];

    // open files
    while (i < argc){
        fps[i] = fopen(argv[i], "w");
        i ++;
    }

    i = 0;
    while ((c[i] = getchar()) != EOF){
        j = 0;
        while (j < argc){
            putc(c[i], fps[j]);
            j ++;
        }
        i ++;
    }
    // close files
    while (i < argc){
        fclose(fps[i]);
        i ++;
    }
}

