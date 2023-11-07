#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
    setlocale(LC_ALL, "portuguese");
    
    char usuariocorreto[] = "senai"; 
    char senhacorreta[] = "senai24";  
    char usuariodigitado[50];
    char senhadigitada[50];

    do {
        printf("Digite o nome de usuario: ");
        scanf("%s", usuariodigitado);

        printf("Digite a senha: ");
        scanf("%s", senhadigitada);

        if (strcmp(usuariodigitado, usuariocorreto) == 0 && strcmp(senhadigitada, senhacorreta) == 0) {
            printf("acesso permitido!\n");
            break;
        } else {
            printf("Login ou senha invalidos. Tente novamente.\n");
        }
    } while (1);

return 0;
}
