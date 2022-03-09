#include <stdio.h>

int main(){

    //otimizando o codigo aproveitando o mesmo tipo para declara-las na mesma linha.
    int x = 5, y = 10;

    printf("\n Valor guardado em X: %d",x);
    printf("\n Valor guardado em Y: %d", y);

    //%x inteiro hexadecimal - & permite acessar diretamente os endereços de memória das variáveis
    printf("\n Endereco de X: %x", &x);
    printf("\n Endereco de Y: %x", &y);

    return 0;
}