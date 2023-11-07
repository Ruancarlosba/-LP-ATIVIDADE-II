#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portugues");

int produto;


printf ("digite 1 - para camisa , 2 - para calça , 3 - para sapato  :\n");
scanf("%d", &produto);


switch (produto)
{
case 1 : 
    printf (" camisa \n R$ 15 ,00\n");

    break;

    case 2 : 
    printf ("calça \n R$ 30 ,00 \n");
    break;

    case 3 : 
    printf ("sapato \n R$ 65 ,00 \n");

default:
    break;
}





return 0;
}