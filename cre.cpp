
#include <stdio.h>
#include <stdlib.h>

int main(){

int tabla, numero;

for( tabla=1; tabla <=5; tabla++ ){

for (numero=1; numero<=10; numero++)

    printf(" %i por %i es %i... y lo sabes!! \n", tabla, numero, tabla*numero);
printf( "\n" );

}


return EXIT_SUCCESS;


}
