# include <stdio.h>


int main(int argc, char const *argv[]){
    int A[5] = {3};
    printf("%d\n", *(A+3));
    scanf("%d", &*A);
    printf("%d\n", *(A));
}