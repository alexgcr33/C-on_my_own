
#include <stdio.h>
#include <stdlib.h>

int main(){

int a=0, b=0, c=0, i=0;

printf("Me vas a dar 10 numeros, y vamos ha hacer la media :D \n");

do{
    
    printf("Dame un numero: ");
    scanf(" %d", &a);
    b+=a;
    i++;
} while(i<10);

c=b/10;
    printf("La media de todas las notas es: %d \n", c);


return EXIT_SUCCESS;


}
