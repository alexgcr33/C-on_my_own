
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char pass [40], real[40]= "cascada";
    int cont=0;

while (pass!=real || cont==5) {

    printf("pues deberias de darme una contraseña si quieres acceder: ");
scanf( " %s", &pass);
cont++;
};
if( cont<5 ) printf("enhorabuena has accedido en el intento numero %d \n", cont);
else printf(" terminal bloqueado has llegado al limite... \n");







return EXIT_SUCCESS;


}
