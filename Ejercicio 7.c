#include <stdio.h>

#include<string.h>   


int main()
{
    
    int i;

    char nombre_del_mas_joven[100]; 

    char auxiliar[100];
                                 
    int años_del_mas_joven;   

    int años_auxiliar;
    
    for(i=0;i<=2;i++)                                                   
    {
        printf("\n ingrese el nombre de la persona N%d:",i+1);

        scanf("%s",auxiliar);
        
        printf("\n ingrese la edad de la persona N%d:",i+1);

        scanf("%d",&años_auxiliar);
        
        if(i==0)
        
        años_del_mas_joven=años_auxiliar;   
        
        if(años_auxiliar < años_del_mas_joven)

        {

            años_del_mas_joven = años_auxiliar;

            strcpy(nombre_del_mas_joven,auxiliar);  
            
        }
    }
    
    
    printf("la persona mas joven es llamada: %s",nombre_del_mas_joven); 
    
   
}
// SARAGO //