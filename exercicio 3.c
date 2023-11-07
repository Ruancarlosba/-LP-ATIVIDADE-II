#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {


setlocale(LC_ALL, "portugues");


float nota;


printf ("digite sua nota :\n");
scanf ("%f", &nota);

if ( nota >= 9)
{
    printf ("Exelente.\n");
}


else if (nota >= 7 || nota >= 8.9) {

    printf ("Bom.\n");
} else if (nota >= 5 || nota >= 6.9) {

    printf ("Razoavel.\n");

} else if ( nota < 5 ) {

    printf ("insuficiente.\n");
}




return 0;
}