

#include <stdio.h>
#include <stdlib.h>

int main(){

int numero[4];
int suma, i=0;

do{
printf("necesito que me des un numero machote...: ");

scanf(" %i", &numero[i]);

i++;


}while( i!=5 );

suma=numero[0]+numero[1];

printf(" el numero resultante es... %i \n ", suma);

return EXIT_SUCCESS;


}
