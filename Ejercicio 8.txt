#include <stdio.h>

#include <string.h>

int main (){

int i = 0;

char col3[50] = {0};

char col4[50] = {100};

while(i>=0){

printf(" Ingrese el nombre de la persona %d o FIN: \n", i);

scanf("%s", col3);

if (strcmp(col3,"FIN")==0){

i = -2;

}

else{

if (strcmp(col3,col4)<0){

strcpy(col4,col3);

}

}

        i++;

}

    printf("1er Persona ordenada alfabeticamente: %s \n", col4);

}

// SARAGO //