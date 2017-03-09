
#include <stdio.h>
#include <stdlib.h>

int main(){
int a=0 , b=0;

for(int i=0; i<10;i++ ){
printf("Dime un numero machote: ");
scanf(" %d", &a);

if (a>b) b=a;

}

printf ("El numero mayor introducido es %d \n", b);



return EXIT_SUCCESS;


}
