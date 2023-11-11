#include <stdio.h>
#include <string.h>

#define User_Teacher_Preset "Geovanny"

#define KeyWord_Teacher_Preset "9485"

#define User_Daniel_Preset "Daniel"
#define KeyWord_Daniel_Preset "1234"

#define User_Danna_Preset "Andres"
#define KeyWord_Danna_Preset "1983"

#define User_Juan_Preset "Juan"
#define KeyWord_Juan_Preset "0987"


int main()
{
	char User[30];
	char KeyWord[30];
	char Nombre[50];
	char Recuperacion[100];
	int Ingresar,editar;
	int Opcion;
    float PromedioD,Nota1D,Nota2D,Nota3D,PromedioA,Nota1A,Nota2A,Nota3A,PromedioJ,Nota1J,Nota2J,Nota3J;
    
    
    while(1){
    	printf("\n\t\t\t SIGN IN \n");
		printf("\n Ingrese su Usuario:");
		scanf("%s",User);
		
		printf("\n Ingrese su Contraseña:");
		scanf("%s",KeyWord);
		
		if (strcmp(User, User_Teacher_Preset) == 0 && strcmp(KeyWord, KeyWord_Teacher_Preset) == 0){ //En Caso de que el usuario y clave sea los del profesor
		 printf("\nSistema Asis\n");
			
		        printf("1. Ingresar Datos del Estudiante\n");
		        printf("2. Salir\n");
		        scanf("%i", &Opcion);
		        
		        	if (Opcion) {
		        		
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
			                printf("\nLa Nota final de %s es de %.1f", Nombre, Promedio); //Se muestra el promedio de estudiante
			                 
							if (Promedio <= 3.0) {
								printf("\ndesea dejar una recuperacion? 1/si 2/no\n"); // En caso de que el estudiante tenga una baja Nota se le puede dejar un trabajo recuperatorio
								scanf("%i", &Opcion);
							    switch (Opcion) {
							    	
							    		case 1:
							    			printf("\nIngrese el trabajo menos de 100 caracteres:");
							                fflush(stdin);
							                scanf("%s", &Recuperacion);
							                
							            case 2:
							            	printf("\nQue tenga buen dia:");
							            	break;
						            	
							}
						}
							
							else
							printf("\nQue tenga buen dia:");
							break;
		                
		                case 2:
		                	printf("\nQue tenga buen dia:");
		                	
		                	break;
		                
		        
					}
					
					else if == 2{
					}
			}
		}
		if (strcmp(User, User_Student_Preset) == 0 && strcmp(KeyWord, KeyWord_Student_Preset) == 0){ //En Caso de que el usuario y clave sea los del Alumno
			printf("\nSistema Asis\n");
				if (Promedio == 0){
					printf("\nAun No se generan Notas por favor Espere o Comuniquese con su profesor\n");
				}
				else{
				
					printf("\nLa Nota final de %s es de %.1f", Nombre, Promedio);
					printf("\nSus Notas son %f", Nota1,Nota2;Nota3);
				}
}
