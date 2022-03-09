// Vamos criar um vetor para guardar a idade de 3 pessoas, os valores serão informados pelo usuário.
// após a leitura das idades o programa deve calcular e imprimir a média de idade dessas pessoas.

#include <stdio.h>

int main(void){

    int idade [3] =  {0,0,0};
    float media = 0.0;

    //armazena os valores nos vetores
    printf("\n Informe a idade da primeira pessoa: ");
    scanf("%d", &idade[0]);
    printf("\n Informe a idade da segunda pessoa: ");
    scanf("%d", &idade[1]);
    printf("\n Informe a idade da terceira pessoa: ");
    scanf("%d", &idade[2]);

    //variavel primitiva que realiza o calculo das medias das idades.
    media = (idade[0] + idade[1] + idade[2]) / 3;
    printf("\n Média de idade = %.2f", media);

    return 0;  
}