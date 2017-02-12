

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

char text[40], text2[40];
int compa;

        printf("necesito una buena palabra:  ");
        gets(text);

        printf("voy a necesitar otra palabra:  ");
         gets(text2);

                compa = strcmp(text, text2);

        if (compa==0)
        printf("son iguales tio!! \n");
else     if (compa >0) 
                printf(" la palabra es mayor tiiiioooo.... \n");
        else printf("La segunda palabra es mayor que la primera.... \n");







return EXIT_SUCCESS;


}
