#include <stdio.h>

int main() {
    float temperatura, umidade;
    int estoque;
    int estoqueminimo = 1000;

    printf("Coloque a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Coloque a umidade: \n");
    scanf("%f", &umidade);
    printf("Coloque o estoque: \n");
    scanf("%d", &estoque);

    if (temperatura > 30) {
        printf("Temperatura está alta\n");
    } else {
        printf("Temperatura dentro do padrão\n");
    }

    if (umidade > 50) {
        printf("Umidade elevada\n");
    } else {
        printf("Umidade dentro do padrão\n");
    }

    if (estoque < estoqueminimo) {
        printf("Estoque abaixo do mínimo\n");
    } else {
        printf("Estoque normal\n");
    }

    return 0;
}
