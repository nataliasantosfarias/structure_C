#include <stdio.h>

void printImage(char image[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", image[i][j]);
        }
        printf("\n");
    }
}

void drawX(char image[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || j == size - i - 1) {
                image[i][j] = 'X';
            } else {
                image[i][j] = ' ';
            }
        }
    }
}

int main() {
    int size = 7; // Tamanho da matriz (ímpar para formar um "X")
    char image[10][10]; // Matriz de caracteres

    // Preencher a matriz com espaços em branco
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            image[i][j] = ' ';
        }
    }

    // Desenhar o "X" na matriz
    drawX(image, size);

    // Imprimir a imagem
    printf("Imagem do X:\n");
    printImage(image, size);

    return 0;
}
