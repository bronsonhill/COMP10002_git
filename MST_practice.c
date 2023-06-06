#include <stdio.h>
#include <math.h>

int q1_2022();
int q2_2022();
int q3_2022();
int is_k_PFS_number(int n, int k);
int isprime(int num);
int isfactor(int num, int k);

int main(int argc, char *argv[]){
    q1_2022();
    //printf("%d", q2_2022());
    return 0;
}

int isprime(int num){
    if (num <= 1) {
        return 0;
    }
    if (num == 2 || num == 3) {
        return 0;
    }
    if (num % 2 == 0) {
        return 0;
    }
    int sqrt_num = (int) sqrt(num);
    for (int i = 3; i <= sqrt_num; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// tests if num is factor of k
int isfactor(int num, int k){
    for (int i=1; i < sqrt(k)+1; i++){
        if (num*i==k){
            return 1;
        }
    }
    return 0;
}


int q1_2022(){
    int u_input, len;
    printf("Enter the number of rows:");
    scanf("%d", &u_input);

    if (u_input>0 && u_input%2==0){
        for (int i = 1; i < u_input+1; i++){
            len = i;
            if (i % 2 == 1){
                while (len >= 0){
                    printf("*");
                    len--;
                }
            } else {
                printf("\nI");
                int n = i;
                while (n > 1){
                    printf(" ");
                    n --;
                }
                if (n>2){
                    printf("+");
                }
                printf("\n");
            }
        }
    } else {
        printf ("Input invalid.");
    }
    return 0;
}

int q2_2022(){
    int n, k;
    printf("Enter n and k:");
    scanf("%d %d", &n, &k);
    
    int greatest_k_PFS = 0;
    for (int i=1; i<n; i++){
        if (is_k_PFS_number(n, k)){
            // printf("Found\n");
            greatest_k_PFS = i;
        }
    }

    return greatest_k_PFS;
}

int is_k_PFS_number(int n, int k){
    int sum = 0;
    for (int i=0; i<n; i++){
        if (isprime(i) && isfactor(i, n)){
            sum += i;
            printf("%d\n", sum);
        }
    }
    if (sum<k){
        return 1;
    }
    return 0;
}


int q3_2022(){
    int n, k;
    printf("Enter n and k:");
    scanf("%d %d", &n, &k);

    return 0;
}