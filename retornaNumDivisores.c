#include <stdio.h>

int retornaNumDivisores(int n) {
    int qtd = 0;
    
    for (int i=1; i<=n; i++) {
        if (n % i == 0) {
            qtd++;
        }
    }
            
    return qtd;
}

int main()
{
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    int numDivisores = retornaNumDivisores(n);
    printf("O numero de divisores de %d eh: %d", n, numDivisores);
        
    return 0;
}