
#include <stdio.h>
#include <stdlib.h>

int main(){

int numb=0, numb2=0;


printf("Bien veamos si el numero es perfecto..");

printf("Bien, me vas a dar un numero: ");
scanf(" %d", &numb);


for(int i=1; i<numb; i++ ){

    if(numb % i==0)
        numb2+=i;
}

if(numb== numb2){

    printf("El numero que has introducido es perfecto!! \n");

}else{

        printf("El numero que has introducido no es perfecto!! \n");
} 


return EXIT_SUCCESS;


}
