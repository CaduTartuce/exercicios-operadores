#include<stdio.h>

int main(){
   /*
        Dadas as medidas de uma sala informe sua área.
    */
   float largura, comprimento, area;

   //entrada de dados
   printf("Digite a largura");
   scanf("%f", &largura);

   printf("Digite o comprimento");
   scanf("%f", &comprimento);

   //calcular a area
   area = largura * comprimento;

   //apresenta a saida
   printf("A area da sala e: %.2fm2, area");

}