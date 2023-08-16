#include <stdio.h>
#include <stdlib.h>
// Função recursiva para calcular o produto de dois números.
int produtoRecursivo(int x1, int x2){
    // Caso base: Se x2 for 0, o produto é 0.
    if (x2 == 0){
        return 0;
    }
    // Caso base: Se x2 for 1, o produto é x1.
    if(x2 == 1){
        return x1;
    }
    // Caso geral: Retorna x1 somado ao resultado da recursão com x2 - 1.
    return x1 + produtoRecursivo(x1, x2 - 1);
}


int main(){
    int produto, x1 = 5, x2 = 4;
    produto = produtoRecursivo(x1,x2);
    
    printf("\nproduto: %i", produto);
    
}

 