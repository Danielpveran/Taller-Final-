#include <stdio.h>
#include <string.h>

#define User_Teacher_Preset "1234567890"

#define KeyWord_Teacher_Preset "9485"

#define User_Student_Preset "0987654321"

#define KeyWord_Preset "1234"


int main()
{
	char User[30];
	char KeyWord[30];
	int Ingresar,editar;
	int Opcion;
    float Promedio;
    char Nombre;
    
    
    	printf("\n\t\t\t SIGN IN \n");
		printf("\n Ingrese su Usuario:");//1
		scanf("%s",User);
		
		printf("\n Ingrese su Contraseña:");
		scanf("%s",KeyWord);
		
		if (strcmp(User, User_Teacher_Preset) == 0 && strcmp(KeyWord, KeyWord_Teacher_Preset) == 0){
		 printf("\nSistema Asis\n");
			while(1){
		        printf("1. Ingresar Datos del Estudiante\n");
		        printf("2. Editar notas\n");
		        scanf("%i", &Opcion);
		        
		        	switch (Opcion) {
		        		
		            case 1:
		                printf("\nNombre del estudiante ");
		                scanf("%S", &Nombre);
		                
		                printf("Ingrese la Nota del 1 Corte");
		                scanf("%f", &Nota1);
		                printf("Ingrese la Nota del 2 Corte");
		                scanf("%f", &Nota2);
		                printf("Ingrese la Nota del 3 Corte");
		                scanf("%f", &Nota3);
		                break;
		        
			}
		}
}
