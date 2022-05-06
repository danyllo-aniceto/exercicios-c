#include <stdio.h>

void somaNumDivisores(int vetor[], int n) {
    for (int i=0; i<n; i++) {
        int soma = 0;
        for (int j=1; j<vetor[i]; j++) {
            if (vetor[i] % j == 0) {
                soma = soma + j;
            }
        }
        if (soma == vetor[i]) {
            printf("O %d eh um numero perfeito\n", vetor[i]);
        }
    }
}

int main()
{
    int vetor[] = {6, 28, 496, 8128, 33550336};
    
    somaNumDivisores(vetor, 5);
        
    return 0;
}