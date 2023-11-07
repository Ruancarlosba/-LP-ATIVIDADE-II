#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portugues");



    int ops;

    printf ("digite 1 - novo jogo , 2 - para carregar jogo , 3 - para configuracoes :\n");
    scanf ("%d", &ops);


    switch (ops)
    {
    case 1 :
        printf ("novo jogo....\n");

        break;
    case 2 : 
    printf ("carregando o jogo ....\n");
    break;

    case 3 : 
    printf ("indo para configuracoes....\n");    
    
    default:
        break;
    }


return 0;
}