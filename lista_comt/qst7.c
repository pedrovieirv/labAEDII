#include <stdio.h>
#include <stdlib.h>

// Função recursiva f que recebe dois argumentos inteiros m e n.

f(int m, int n){
     // Caso base: Quando n chega a 1, retorna m + 1.
    if (n == 1){
        return m + 1;
        // Caso base: Quando m chega a 1, retorna n + 1.
    } else if(m == 1){
        return n + 1;
         // Caso geral: Chama recursivamente a função para f(m, n-1) e f(m-1, n) e retorna a soma.
    } else if (m > 1 && n > 1){
        return f(m, n - 1) + f(m-1, n);
    }
}


int main (){
int m = 3;
int n = 4;

int result = f(m,n);
printf ("f(%d, %d) = %d\n",m,n, result ); 
return 0;
}