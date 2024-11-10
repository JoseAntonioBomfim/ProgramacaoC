#include <stdio.h>


int main(){
int idade = 18;
char* resultado;

resultado = (idade >= 18) ? "Maior idade" : "Menor idade"; // Condição ? se_valor_verdadeiro : se_valor_faldo;

printf("Resultado: %s", resultado);

return 0;
}