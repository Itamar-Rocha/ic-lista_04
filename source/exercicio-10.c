// Exercício 10

#define EH_MAIUSCULO (string[i] > 64 && string[i] < 91)
#define EH_MINUSCULO (string[i] > 96 && string[i] < 123)

#include <stdio.h>

int main()
{
    char string[30];
    int input = 1;
    while(input){
        printf("Informe apenas caracteres romanos para letras: ");
        scanf("%s", string);
        int i;
        for (i = 0; i < 30; i++){
            if (!(EH_MAIUSCULO || EH_MINUSCULO || string[i] == 0)){
                break;
            }
        }
        if(i == 30){
            input = 0;
        }
    }
    
    printf("String modificada: ");
    for(int i = 0; i < 30; i++){
        if(EH_MAIUSCULO){
            printf("%c", string[i]+32);
        } else if (EH_MINUSCULO){
            printf("%c", string[i]-32);
        }
    }
    
    return 0;
}

