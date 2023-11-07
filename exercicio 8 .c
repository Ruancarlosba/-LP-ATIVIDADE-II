#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int numero ;
int i;

if (numero < 0);
printf("Digite um número: ");
scanf("%d", &numero);

for ( i = numero; i > -1; i--)
{
printf("%d\n", i);
}















return 0;
}