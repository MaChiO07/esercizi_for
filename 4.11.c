#include<stdio.h>

int main(void) {

    int i = 100;

    printf("--I primi 100 numeri pari in ordine inverso-- \n");
    
    // while(i <= 100 && i >= 0) {
    //     i--;
    //     if (i %2 == 0) {
    //         printf("%d \n", i);
    //     }
    // }

    for (i = 100; i >= 0; i--) {
        if (i %2 == 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}