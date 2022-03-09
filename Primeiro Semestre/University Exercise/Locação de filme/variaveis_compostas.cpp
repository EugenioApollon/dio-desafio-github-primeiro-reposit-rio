// Vamos criar um vetor em C para guardar altura de 3 pessoas

#include <stdio.h>

int main(){

    //armazenando 3 valores em uma variavel composta (vetor)
    float altura [3] = {1.65, 1.80, 1.7};

    //imprimindo na tela com seus indices [0], [1] e [2]. Sempre iniciando em 0.
    printf("\n Vetor altura [0] = %.2f", altura[0]);
    printf("\n Vetor altura [1] = %.2f", altura[1]);
    printf("\n Vetor altura [2] = %.2f", altura[2]);

    return 0;

}