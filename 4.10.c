#include<stdio.h>
#include<math.h>

int main (void) {

    int number;
    int i;

    printf("Inseire numero di potenze di 2 da visualizzare (2 <= N <= 20):" );
    scanf("%d", &number);

    if (number >= 2 && number <= 20) {

        // while(i<=number) {
        //     printf("2^%d = %d\n", i, (int)pow(2, i));
        //     i++;

        for (i = 1; i<= number; i++) {
             printf("2^%d = %d\n", i, (int)pow(2, i));
        }
        

    } else {
        printf("ERORR: Numero non sta nelle condizioni giusti! \n");
    }




    return 0;
}