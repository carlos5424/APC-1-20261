#include <stdio.h>	

int main() {

    int n;
    int soma = 0;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &n);
    while(getchar() != '\n');

    int vetor[n];

    for (int i = 0; i < n; i++) {

        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
        while(getchar() != '\n');

        soma = soma + vetor[i];
    }

    float media = (float)soma / n;

    printf("Media aritmetica = %.2f\n", media);

    return 0;				
}