#include <stdio.h>

int main() {
    int matriz[10][10];  // Definindo uma matriz 10x10

    // Inicializando a matriz com valores
    // Vamos preencher com valores simples, como os índices da matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i * 10 + j;  // Atribuindo um valor simples baseado na posição
        }
    }

    // Exibindo os valores da matriz
    printf("Matriz 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);  // Imprime o valor com formatação
        }
        printf("\n");  // Nova linha após cada linha da matriz
    }

    return 0;
}
