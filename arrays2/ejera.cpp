


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char texto[40], texto2[40], plus[20];

printf("dame una frase: ");

gets(texto);

printf("ahora dame una palabra: ");

gets(plus);

strcpy(texto2, texto);
printf(" una copia la tenemos aqui es %s\n", texto2);







return EXIT_SUCCESS;


}
