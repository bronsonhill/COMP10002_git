#include <stdio.h>

int refresh_data(float *price, int *time);

int main(int arg, char **argv){
    float price = 10.56;
    int time = 100000000;
    printf("Price at time %d: %f\n", time, price);
    float *price_p = &price;
    int *time_p = &time;
    
    refresh_data(price_p, time_p);
    printf("Price at time %d: %f\n", time, price);
    return 0;
}


int refresh_data(float *price, int *time){
    printf("Enter new price: ");
    scanf("%f", &*price);
    printf("Enter new time: ");
    scanf("%d", &*time);
    return 0;
}