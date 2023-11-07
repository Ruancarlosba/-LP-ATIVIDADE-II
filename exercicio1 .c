#include <stdio.h>
#include <stdlib.h>

int main (){


int temperatura;

printf ("qual a temperatura do jogo :\n");
scanf("%d", &temperatura);

if (temperatura > 25)
{
    printf (" o clima esta ensolarado.\n");

} else if (temperatura < 15 ) {

    printf ("o clima esta chuvoso.\n");

} else if ( temperatura >= 15 || temperatura <= 25) {

    printf ("o clima sera nublado.\n");
}



    return 0;
}