#include <stdio.h>

int main() {

    int opcao = 0;

    printf("Selecione a opcao do menu\n 1 - Novo Jogo\n 2 - Continuar jogo\n 3 - Ver pontuacao\n 4 - Sair\n");
    scanf("%i", &opcao);

    switch(opcao) {
        case 1: printf("Novo jogo iniciado\n"); break;
        case 2: printf("Jogo existente carregado\n"); break;
        case 3: printf("Pontuacao 0 por que voce e ruim\n"); break;
        case 4: printf("Jogo fechado\n"); break;
        default: printf("numero invalido!\n");
    }

    return 0;
}