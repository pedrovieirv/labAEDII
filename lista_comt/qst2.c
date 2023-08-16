#include <stdio.h>
#include <stdlib.h>
// Função para calcular a quantidade de aulas entre a data atual e o fim do semestre letivo
int diasDeAulas(int dia, int mes, int ano){
int ultDia = 29, ultMes = 10, ultAno = 2023;
// Convertendo anos, meses e dias para dias para facilitar o cálculo
ano  *= 365;
mes *= 30;
dia += mes+ano;
ultAno  *= 365;
ultMes *= 30;
ultDia += ultMes+ultAno;
// Calculando semanas entre a data atual e o fim do período
int semanas = (ultDia - dia)/7;
// Calculando a quantidade de aulas considerando 2 aulas por semana
int qntdAulas = semanas*2;

return qntdAulas;

}

int main(){
int dia, mes, ano;
// solicitando ao usuario a entrada da data
printf("\nInsira o dia: ");
scanf("%i", &dia);
printf("\nInsira o mes: ");
scanf("%i", &mes);
printf("\nInsira o ano: ");
scanf("%i", &ano);
int R = diasDeAulas(dia, mes, ano);
printf("\nQuantidade de aulas entre a data atual e fim do periodo: %i", R);
}