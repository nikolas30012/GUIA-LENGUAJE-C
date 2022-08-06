
#include <stdio.h>
#include <ctype.h>

int contarLetra(char *cadena);  

int main(int argc, char const *argv[])

{
	
 char entrada[100];

 printf("Ingresa una palabra:\n"); 

 gets(entrada); 

 int a = contarLetra(entrada); 

 printf("la cantidad de vocales que tiene la cadena es: %d\n", a); 

 system("pause");

 return 0;
}

int contarLetra(char *cadena){

 int a = 0;

 for (int indice = 0; cadena[indice] != '\0'; ++indice){ 

 char letraActual = tolower(cadena[indice]);	

 if (
 letraActual == 'a' || 
 letraActual == 'e' || 
    
 letraActual == 'i' || 
 letraActual == 'o' || 
 letraActual == 'u'
)
        {
            a++; 
        }	 
	
	}
	return a;
}
// SARAGO //
