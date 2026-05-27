#include <stdio.h>

int main() {

    int numero;

    printf("digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d eh par\n");
    }else {
        printf("O numero %d eh impar\n");
    }

    

    return 0;
}