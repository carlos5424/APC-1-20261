#include <stdio.h>

int main() {

    int dia = 0;

    printf("Selecione o dia da semana utilizando de 1 ate 7: ");
    scanf("%i", &dia);

    switch(dia) {
        case 1: printf("segunda-feira, dia util\n"); break;
        case 2: printf("terca-feira, dia util\n"); break;
        case 3: printf("quarta-feira, dia util\n"); break;
        case 4: printf("quinta-feira, dia util\n"); break;
        case 5: printf("sexta-feira, dia util\n"); break;
        case 6: printf("sabado, final de semana\n"); break;
        case 7: printf("domingo, final de semana\n"); break;
        default: printf("numero invalido!\n");
    }

    return 0;
}