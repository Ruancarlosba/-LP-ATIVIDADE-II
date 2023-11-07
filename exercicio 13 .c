#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"portuguese");

  int numero1, numero2;
  int maior, menor;
  

    printf("Digite o primeiro numero:");
    scanf("%d" , &numero1);

    printf("Digite o segundo numero:");
    scanf("%d" ,&numero2);

    

    
    maior = numero1 > numero2 ? numero1 : numero2;
    
    menor = numero1 < numero2 ? numero1 : numero2;
    
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d \n", menor);


    return 0;
}
