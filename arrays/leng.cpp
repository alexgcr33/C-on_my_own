
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char texto[40];

printf("Introduce una palabra:  ");
scanf(" %s", texto);

printf("has tecleado %d letras \n", strlen(texto));


return EXIT_SUCCESS;


}
