// Exercício 1

#include <stdio.h>

int main(){
    
    int vetor[10];
    int n;
    
    printf("Informe 10 números inteiros a serem adicionados ao vetor:\n");
    for (int i; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("Informe um número inteiro qualquer: ");
    scanf("%d", &n);
    
    for (int i; i < 10; i++){
        if (vetor[i] == n){
            printf("O número informado está no vetor.");
            return 0;
        }
    }
    printf("O número não está no vetor.");
    return 0;
}