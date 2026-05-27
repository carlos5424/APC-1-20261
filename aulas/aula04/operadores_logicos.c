#include <stdio.h>	

int main() {
    int idade;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');


    printf("Voce eh uma crianca? %i\n", idade >= 0 && idade <= 12);
    // && => 0 Falso E qualquer coisa = Sempre Falso

    printf("Voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);
    // || => 1 Verdadeiro OU qualquer coisa = Sempre Verdadeiro

    // ! NAO Verdadeiro = Falso, NAO Falso - Verdadeiro
    printf("Voce nao pode votar? %i\n", !(idade >= 16));


    return 0;				
}