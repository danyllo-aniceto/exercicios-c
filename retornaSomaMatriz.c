#include <stdio.h>
#include<stdlib.h>

int retornaSomaMatriz(int n, int matriz[][n]) {
    int soma=0;
    
    for(int i=0;  i<n; i++){
        for(int j=0; j<n; j++){
            soma = soma + matriz[i][j];
        }
    }
    
    return soma;
}

int main()
{
    int matriz[5][5];
    
    printf("Matriz gerada de forma randomica: \n");
    for(int i=0;  i<5; i++){
        for(int j=0; j<5; j++){
            matriz[i][j] = rand() % 100;
            printf ("%d ",matriz[i][j]);
        }
        printf ("\n");
    }
    
    
    int soma = retornaSomaMatriz(5, matriz);

    printf("\n\n Somatorio eh: %d", soma);
    return 0;
}