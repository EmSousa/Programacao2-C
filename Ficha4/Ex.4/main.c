/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 10:53
 */

#include <stdio.h>
#include <stdlib.h>

float nota(int quantidade) {
    int i;
    double notas, soma;

    for (i = 0; i < quantidade; ++i) {
        printf("Introduza a nota do %d teste ", i + 1);
        scanf("%lf", &notas);
        soma += notas;
    }
    return soma;
}

float media(int notas, int quantidade) {
    float media;
    printf("A média das notas é %.2f.", (float) (notas / quantidade));
}

int main(int argc, char** argv) {

    int quantidade;
    double media1, notas;

    puts("Quantas notas quer introduzir?");
    scanf("%d", &quantidade);

    notas = nota(quantidade);
    
    media1 = media(notas, quantidade);
    
    return (0);
}

