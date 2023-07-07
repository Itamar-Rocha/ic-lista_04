// Exercício 9

#define TAMANHO 10

#include <stdio.h>

int main()
{
    int vetor[TAMANHO];
    
    printf("Informe %d números: ", TAMANHO);
    for (int i = 0; i < TAMANHO; i++){
        scanf("%d", &vetor[i]);
    }
    
    // Escala super mal, mas usa poucas linhas :)
    for (int i = 0; i < TAMANHO-1; i++){
        for (int j = 0; j < TAMANHO-i-1; j++){
            if (vetor[j] > vetor[j+1]){
                int temp = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    
    printf("Vetor ordenado: ");
    for (int i = 0; i < TAMANHO; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

