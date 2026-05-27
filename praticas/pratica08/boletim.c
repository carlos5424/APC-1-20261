#include <stdio.h>	

int main() {

    float nota1[10];
    float nota2[10];
    float media;

    for (int i = 0; i < 10; i++) {


        printf("\nAluno %d\n", i + 1);
        
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1[i]);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2[i]);
    }

    printf("\n=====BOLETIM=====\n");

    for (int i = 0; i < 10; i++) {

        media = (nota1[i] + nota2[i]) / 2;

        printf("Aluno %d -> Nota 1: %.1f | Nota 2: %.1f | Media: %.1f\n", i + 1, nota1[i], nota2[i], media);
    }

    return 0;				
}