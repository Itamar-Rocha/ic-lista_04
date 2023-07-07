// Exercício 7

#include <stdio.h>

int main()
{
    int vetor[20];
    int frequencia[] = {0,0,0,0,0,0,0,0,0,0};
    
    printf("Informe 20 números inteiros entre 0 e 10: ");
    for (int i = 0; i < 20; i++){
        while(1){
            scanf("%d", &vetor[i]);
            
            if (vetor[i] > 10 || vetor[i] < 0){
                printf("Informe um número no intervalado de 0 a 10: ");
            } else {
                break;
            }
            frequencia[vetor[i]]++;
        }
    }
    
    for (int i = 0; i < 10; i++){
        printf("Quantidade de %d: %d\n", i+1, frequencia[i]);
    }

    return 0;
}
