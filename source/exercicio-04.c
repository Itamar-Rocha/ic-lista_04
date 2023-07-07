// Exercício 4

#include <stdio.h>

int main()
{
    
    int n;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    
    int vetor[n];

    printf("Informe 10 números inteiros: ");
    for (int i= 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    for (int i = n-1; i >= 0; i--){
        printf("%d ", vetor[i]);
    }

    return 0;
}

