#include <stdio.h>
#include <string.h>
#include "utils.h"

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int lastIndex(char espaco, char nome_completo[], int max) {
    int i = 0, posicao = -1;

    while (nome_completo[i] != '\0') {
        if (nome_completo[i] == espaco) {
            posicao = i;
        }
        ++i;
    }
    return posicao;
}