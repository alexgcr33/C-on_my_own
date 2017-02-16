
#include <stdio.h>
#include <stdlib.h>


void cuadrado(int met ){
    met =met*met;
printf("El cuadrado del numero es %d \n", met);


}

void perimetro(int met){

met=met*4;

printf("El perimetro total es: %d \n", met);

}


int main(){

int met=0;
int elec=0;
int cho=0;
printf("Dame la distancia de tu cuadrado: ");
scanf(" %d", & met);

printf("Ahora, escribe un 1 si quieres su area o 0 si su perimetro:  ");
scanf(" %d", & cho);

if (cho==elec) 
cuadrado(met);


else

    perimetro(met);


return EXIT_SUCCESS;


}
