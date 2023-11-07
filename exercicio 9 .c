#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portugues");

int i, n;

printf ("digite o numero :\n");
scanf ("%d", &n);
if ( n <= 1) {

    printf ("nao e primo");
} else {
    for (i = 2; i < n; i++){
        if (n%i == 0){
            printf ("nao e primo");
            break;
        }
    }
    if (i == n) {
        printf ("e primo");
    }
}





return 0 ;
}