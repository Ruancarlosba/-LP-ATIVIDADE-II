#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portugues");

int numero1 , numero2;
int ops;

printf ("digite o numero : \n");
scanf ("%d", &numero1);

printf ("digite o segundo numero : \n");
scanf ("%d", &numero2);


printf ("digite 1 - para soma , 2 - para subitracao :");
scanf ("%d", &ops);

switch (ops)
{
case 1:
    numero1 + numero2;
    printf ("soma : %d\n", numero1 + numero2);

    break;

case 2 : 

numero1 - numero2;
printf ("subitracao : %d \n", numero1 - numero2);
break;

default:
    break;
}




return 0 ;
}