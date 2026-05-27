#include <stdio.h>	

int main() {

    int vetor[10];
    int numero;
    int encontrado = 0;

    for (int i = 0; i < 10; i++) {

        printf("Digite o %d numero: ", i +1);
        scanf("%d", &vetor[i]);
        while(getchar() != '\n');
    }

    printf("Digite um numero para procurar: ");
    scanf("%d", &numero);
    while(getchar() != '\n');

    for (int i = 0; i < 10; i++) {

        if (vetor[i] == numero){

            printf("Numero encontrado na posicao %d\n", i);

            encontrado = 1;
        }
    }

    if (encontrado == 0){
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;				
}