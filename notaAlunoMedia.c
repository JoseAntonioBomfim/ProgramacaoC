#include <stdio.h>

int main(){
    float nota1, nota2, media;
    int opcao;

    printf("1. Calcula nota \n");
    printf("2. Verificar Média \n");
    printf("3. saindo... \n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Coloque a nota 1: ");
        scanf("%f", &nota1);
        printf("Coloque a nota 2: ");
        scanf("%f", &nota2);
        if ((nota1 > 0 && nota1 < 10) && (nota2 > 0 && nota2 < 10)){
            media = (nota1 + nota2)/2;
            if (media >= 6)
            {
                printf("Aprovado com Média: %.2f", media);
            }else if(media == 5){
                printf("Recuperação com Média: %.2f", media);
            }else{
                printf("Reprovado com Média: %.2f", media);
            }
            
        }else{
            printf("Valor de nota invalida!");
        }
        break;
    case 2:
        printf("Insira a Media: ");
        scanf("%f", &media);
        if (media == 5)
            {
                printf("Recuperação");
            }else if(media >= 6){
                printf("Aprovado");
            }else{
                printf("Reprovado");
            }
        
        break;
    case 3:
        printf("saindo do programa");
        break;    
    default:
        printf("opção invalida");
        break;
    }
 

}