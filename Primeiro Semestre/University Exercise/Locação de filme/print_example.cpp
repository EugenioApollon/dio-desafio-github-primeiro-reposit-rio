#include <stdio.h>

int main(){
    int idade = 18;
    float salario = 1580.00;
    double percent = 2.5;
    char genero = 'F';
    float altura = 1.75;
    
    //Exemplo de print de cada tipo primitivo. %d inteiro - %f ponto flutuante - %c caracter
    printf("\n Idade: %d", idade);
    printf("\n Salario: %.2f", salario);
    printf("\n Desconto (Porcentagem): %.2f", percent);
    printf("\n Genero: %c", genero);
    printf("\n Altura: %.2f", altura);

    return 0;
}