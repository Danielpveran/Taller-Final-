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
	char Nombre[50];
	char Recuperacion[100];
	int Ingresar,editar;
	int Opcion;
    float Promedio,Nota1,Nota2,Nota3;
    
    
    
    	printf("\n\t\t\t SIGN IN \n");
		printf("\n Ingrese su Usuario:");
		scanf("%s",User);
		
		printf("\n Ingrese su Contraseña:");
		scanf("%s",KeyWord);
		
		if (strcmp(User, User_Teacher_Preset) == 0 && strcmp(KeyWord, KeyWord_Teacher_Preset) == 0){
		 printf("\nSistema Asis\n");
			while(1){
		        printf("1. Ingresar Datos del Estudiante\n");
		        printf("2. Salir\n");
		        scanf("%i", &Opcion);
		        
		        	switch (Opcion) {
		        		
		            case 1:
		                printf("\nNombre del estudiante:");
		                fflush(stdin);
		                scanf("%s", &Nombre);
		                
		                printf("Ingrese la Nota del 1 Corte:\n");
		                fflush(stdin);
		               	scanf("%f", &Nota1);
		                
		                printf("Ingrese la Nota del 2 Corte:\n");
		                fflush(stdin);
		                scanf("%f", &Nota2);
		                
		                printf("Ingrese la Nota del 3 Corte:\n");
		                fflush(stdin);
		                scanf("%f", &Nota3);
		                
		                Promedio = (Nota1 + Nota2 + Nota3) / 3.0;
		                printf("\nLa Nota final de %s es de %.1f", Nombre, Promedio);
		                
						if (Promedio <= 3.0) {
							printf("\ndesea dejar una recuperacion? 1/si 2/no\n");
							scanf("%i", &Opcion);
						    switch (Opcion) {
						    	
						    		case 1:
						    			printf("\nINgrese el trabajo menos de 100 caracteres:");
						                fflush(stdin);
						                scanf("%s", &Recuperacion);
						                break;;
						            case 2:
						            	printf("\nQue tenga buen dia:");
						            	break;
							}
						}
		                
		                
		                
		        
					}
			}
		}
}
