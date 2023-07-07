// Exercício 8

#include <stdio.h>

int main()
{
    int size, quantidade = 0;
   
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &size);
    
    int vetor[size];
    
    printf("Informe %d números: ", size);
    for (int i = 0; i < size; i++){
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < size; i++) {
        int unico = 1;
        
        for (int j = 0; j < size; j++) {
            if (i != j && vetor[i] == vetor[j]) {
                unico = 0;  
                break;
            }
        }
        quantidade += unico;
    }
    
    printf("Quantidade de elementos únicos no vetor: %d\n", quantidade);

    return 0;
}




