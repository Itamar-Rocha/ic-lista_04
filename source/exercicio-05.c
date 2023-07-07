// Exercício 5

#include <stdio.h>

int main(){
    
    const int MENOR_INT = -2147483648;
    int vetor[10];
    int indice, maiorN = MENOR_INT;
    
    printf("Informe 10 números inteiros a serem adicionados ao vetor:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i]>maiorN){
            maiorN = vetor[i];
            indice = i;
        }
    }
    
    printf("O maior número desse vetor é %d, armazenado no índice %d (posição %d)\n", maiorN, indice, indice+1);
    
    return 0;
}
