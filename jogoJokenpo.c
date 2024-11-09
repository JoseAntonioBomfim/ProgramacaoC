#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaJogador, escolaComputador;
    srand(time(0));

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:  ");
    scanf("%d",  &escolhaJogador);

    escolaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("opção invalida\n");
        break;
    }

    switch (escolaComputador)
    {
    case 1:
        printf("computador: Pedra - ");
        break;
    case 2:
        printf("computador: Papel - ");
        break;
    case 3:
        printf("computador: Tesoura - ");
        break;
    default:
        printf("opção invalida\n");
        break;
    }

    if (escolaComputador == escolhaJogador)
    {
        printf("#### Jogo empatou!####");
    }else if ((escolhaJogador == 1) && (escolaComputador ==3) ||
                (escolhaJogador ==2) && (escolaComputador ==1) ||
                (escolhaJogador ==3) && (escolaComputador ==2))
    {
        printf("***Jogador Ganhou!***");
    }else{
        printf("***Voce Perdeu!");
    }
    
    
}