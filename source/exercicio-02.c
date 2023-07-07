// Exercício 2

#include <stdio.h>

int main(){
    
    int vetor[10];
    int x;
    
    printf("Informe 10 números inteiros a serem adicionados ao vetor:\n");
    for (int i; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("Informe o número x: ");
    scanf("%d", &x);
    
    printf("Novo vetor: ");
    for (int i; i < 10; i++){
        if (x <= vetor[i]){
            vetor[i] = 1;
            printf("%d", vetor[i]);
        } else {
            vetor[i] = 0;
            printf("%d", vetor[i]);
        }
    }
    return 0;
}

