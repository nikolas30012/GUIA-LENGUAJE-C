#include <stdio.h>

char palabra[21];

int I;

int main()

{

printf(" Escribi una palabra de maximo 20 caracteres. ");

scanf("%s",palabra);

I=0;

while (palabra[I++]!= 0);

printf("%s Palabra escrita al revez = ", palabra);

while(I>=0)

printf("%c",palabra[I--] ) ;

}
// SARAGO //