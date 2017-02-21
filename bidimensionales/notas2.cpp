

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=0;
char Mensaje[5][80] ={
"Fichero not found","No se puede abrir", "fichero vacio", "permisos de administración","fichero en uso"};

printf("Selecciona un numero del 0 al 4 machote:  ");
scanf(" %i", &num);


printf("el mensaje de error es %s \n",Mensaje[num]);


return EXIT_SUCCESS;


}
