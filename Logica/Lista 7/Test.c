#include <stdio.h>

int main(){
    int num = 10000, pot2 = 1, fim = 0;
    while(num != 0){
        fim += num % 10 * pot2;
        num /= 10;
        pot2 *= 2;
        printf("\n%d", num);
        printf("\n%d", pot2);
        printf("\n%d", fim);
    }
    printf("\n%d", fim);
    return 0;
}