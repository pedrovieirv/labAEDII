#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Função para encontrar e imprimir triplas pitagóricas até o limite oferecido na questão
int ladosPitagoricos(int limit){
    int c, a, b;
    int i;
    int j;
    // Loop através dos valores possíveis de i.
    for (i = 1; i < limit; i++){
        for(j = 1; j < limit;j++){
            
            a = pow(i,2);
            b = pow(j,2);
            c = sqrt((a+b));  // Calculando a raiz quadrada da soma a + b.
            // Verificamos se a soma dos quadrados de a e b é igual ao quadrado de c.
            if((a+b) == pow(c,2)){
                printf("%i %i %i\n", i, j, c); 
            }
        }
    }
}

int main(){
ladosPitagoricos(20);
 