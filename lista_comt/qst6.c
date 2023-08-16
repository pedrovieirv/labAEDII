#include <stdio.h>
// Função recursiva para inverter um número.
int inverterNumeroRecursivo(int n, int invertido){
    // Caso base: Quando n se torna 0, retorna o número invertido.
    if(n == 0){
        return invertido;
    }
        // Pega o último dígito de n.

    int ultimoN = n % 10;
    // Atualiza o número invertido.
    invertido = invertido * 10 + ultimoN;
    // Chama a recursão com n sem o último dígito e o novo invertido.
    return inverterNumeroRecursivo(n / 10, invertido);
}
// Função iterativa para inverter um número.
int inverterNumero(int n){
    int invertido = 0;
    int ultimoN;
    // Loop até que n se torne 0.
    while(n > 0){
         // Pega o último dígito de n.
        ultimoN = n % 10;
        // Atualiza o número invertido.
        invertido = invertido * 10 + ultimoN;
        // Remove o último dígito de n.
        n /= 10;
    }

    return invertido;
}


int main() {
   int n = 4321, invertido;
        // Chama a função recursiva para inverter o número.
  invertido =  inverterNumeroRecursivo(n , 0);
  printf("\nInvertido recursivo: %i", invertido);
        // Chama a função iterativa para inverter o número.
  invertido = inverterNumero(n);
  printf("\nInvertido iterativo: %i", invertido);
}