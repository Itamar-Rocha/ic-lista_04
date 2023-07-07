// Exercício 6

#include <stdio.h>

int main()
{
    
    int n, soma = 0;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("A soma de todos os elementos desse vetor é igual a: %d\n", soma);

    return 0;
}


