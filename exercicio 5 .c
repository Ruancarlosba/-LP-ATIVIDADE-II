#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {


setlocale(LC_ALL, "portugues");

int ops;


printf ("digite 1 - para ingles , 2 - para espanhol , 3 - para frances\n");
scanf ("%d", &ops);


switch (ops)
{
case 1 :
    printf (" seja bem vindo (a) ao idioma ingles !\n");
    break;

    case 2 : 
    printf ("seja bem vindo (a) ao idioma espanhol ! \n");
    break;

    case 3 : 

    printf ("seja bem vindo (a) ao idioma frances ! \n");

default:
    break;
}
return 0;
}