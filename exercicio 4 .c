#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {


setlocale(LC_ALL, "portugues");


int idade;



printf ("digite sua idade :\n");
scanf ("%d", &idade);

if (idade >= 18)
{
    printf ("acesso permitido.\n");

} else
printf ("acesso negado.\n");




return 0;
}