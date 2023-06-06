#include <stdio.h>
#define LEN 3
typedef int ohlc_t[4];
typedef ohlc_t prices_t[LEN];

int update_data(prices_t A);

int main(int argc, char *argv[]){
    prices_t btcusd;
// fill array values
    // printf("%d", )
    for (int i=0; i<LEN;i++){
        printf("Enter o h l c values: ");
        scanf("%d%d%d%d", &btcusd[i][0], &btcusd[i][1], &btcusd[i][2], &btcusd[i][3]);
    }
    for (int i=0; i<LEN; i++){
        printf("Open: %d, High: %d, Low: %d, Close: %d\n", btcusd[i][0], btcusd[i][1], btcusd[i][2], btcusd[i][3]);
    }
    btcusd[0][0] = 12;
    printf("%d\n", btcusd[0][0]);
}

int update_data(prices_t A){
    return 0;
}