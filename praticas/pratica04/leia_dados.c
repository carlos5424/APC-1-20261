#include <stdio.h>

int main () {

    int idade;
    char sexo;
    float altura;
    float peso;

    printf("Informe seu peso: ");
    scanf("%f" , &peso);
    while(getchar() !='\n');

    printf("Informe a sua altura: ");
    scanf("%f" , &altura);
    while(getchar() !='\n');

    printf("Informe o seu sexo F (feminino) M (masculino): ");
    scanf("%c" , &sexo);
    while(getchar() !='\n');
   
    printf("Qual a sua idade: ");
    scanf("%i" , &idade);
    while(getchar() !='\n');

    printf("=================================\n");
    printf("         FICHA DE CADASTROS \n");
    printf("=================================\n");
    printf("A altura informada foi: %.2f\n", altura);
    printf("O sexo informado foi: %c\n", sexo);
    printf("A idade digitada foi: %i\n", idade);
    printf("O peso digitado foi: %.2f\n", peso);

    return 0;
    
}