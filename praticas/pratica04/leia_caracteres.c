#include <stdio.h>	

int main() {
    
    char tecla_pressionada;

    printf("Pressione uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while(getchar() != '\n');

    printf("Voce pressionou a tecla %c\n", tecla_pressionada);

    return 0;				
}