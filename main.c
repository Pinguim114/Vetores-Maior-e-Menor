#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int vetor[50];
    int valor, i, maior, menor;

    printf("Digite a quantidade: ");
    scanf("%d", &valor);

    for (i = 0; i <= valor; i++){
        printf("Digite os valores: ");
        scanf("%d", &vetor[i]);
    }
        //maior
    maior = vetor[0];
    for(i = 1; i <= valor; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("Valor maior: %d\n", maior);
        //menor
    for(i = 0; i <= valor; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Menor valor: %d", menor);

    
    
    

    return 0;
}
