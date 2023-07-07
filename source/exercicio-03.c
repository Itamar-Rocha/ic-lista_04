// Exercício 3

#include <stdio.h>

int main()
{
    
    int n, k, maiorK = 0;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Informe o número K: ");
    scanf("%d", &k);
    
    printf("Informe %d números inteiros: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] >= k){
            maiorK++;
        }
    }
    printf("Números do vetor maiores ou iguais a K: %d\n", maiorK);

    return 0;
}

