/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 11:10
 */

#include <stdio.h>
#include <stdlib.h>
#define distancia 130

int main(int argc, char** argv) {

    int viagem;
    float media;
    puts ("Em quanto tempo pretende fazer a viagem (Minutos)");
    scanf("%d", &viagem);
    
    media = (float)distancia / (viagem / 60);
    
    if (media <= 60){
        printf ("Tem que abastecer ao km 79.\n");
        printf("A viagem será efetuada a uma velocidade média de %.2fkm/h", media);
    }else if (media > 60 && media <= 120){
        printf ("Tem que abastecer ao km 70.\n");
        printf("A viagem será efetuada a uma velocidade média de %.2fkm/h", media);
    }else{
        printf ("Tem que abastecer ao km 60.\n");
        printf("A viagem será efetuada a uma velocidade média de %.2fkm/h", media);
    }
    return (0);
}

