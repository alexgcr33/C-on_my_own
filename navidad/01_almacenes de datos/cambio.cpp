
#include <stdio.h>
#include <stdlib.h>

int main(){
 int a=0,b=0,alm=0;


 printf("dame un valor inicial... : ");
 scanf(" %d", &a);

 printf("ahora dame otro valor... : ");
 scanf(" %d", &b);

printf("Ahora se intercambiaran los numeros maaaagicamente!!!\n");


alm=a;
a=b;
b=alm;

printf("con lo que se quedan las cosas asi: \n a vale:%d \n b vale %d \n ", a,b);





return EXIT_SUCCESS;


}
