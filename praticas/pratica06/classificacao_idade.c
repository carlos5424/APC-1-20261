#include <stdio.h>

int main() {

    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    int eh_menor_que_12_anos = idade <= 12;
    int eh_maior_que_13_anos = idade >= 13;
    int eh_menor_que_17_anos = idade <= 17;
    int eh_maior_que_18_anos = idade >= 18;
    int eh_menor_que_64_anos = idade <= 64;
    int eh_maior_que_65_anos = idade >= 65;
    int eh_maior_que_0_anos = idade >= 0;
    int idade_invalida = idade <= -1;

    if (eh_maior_que_0_anos && eh_menor_que_12_anos) {
        printf("Com %d anos voce eh uma crianca\n", idade);
    }else if (eh_maior_que_13_anos && eh_menor_que_17_anos) {
        printf("Com %d anos voce eh um adolescente\n", idade);
    }else if (eh_maior_que_18_anos && eh_menor_que_64_anos) {
        printf("Com %d anos voce eh um adulto\n", idade);
    }else if (eh_maior_que_65_anos) {
        printf("Com %d anos voce eh um idoso\n", idade);
    }else {
        printf("sua idade %d e invalida\n", idade);
    }

    return 0;
}