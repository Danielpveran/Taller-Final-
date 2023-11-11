#include <stdio.h>
#include <string.h>

#define User_Teacher_Preset "Geovanny"
#define KeyWord_Teacher_Preset "9485"

#define User_Daniel_Preset "Daniel"
#define KeyWord_Daniel_Preset "1234"

#define User_Andres_Preset "Andres"
#define KeyWord_Andres_Preset "1983"

#define User_Juan_Preset "Juan"
#define KeyWord_Juan_Preset "0987"


int main() {
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
			
			if (strcmp(User, User_Teacher_Preset) == 0 && strcmp(KeyWord, KeyWord_Teacher_Preset) == 0){} //Usuario y clave de maestr
			 printf("\nSistema Asis\n");
				
			        printf("1. Ingresar Datos del Estudiante\n");
			        printf("2. Salir\n");
			        scanf("%i", &Opcion);
			        
			        	if (Opcion == 1) {
		        				        		
			            printf("\nNombre del estudiante:");
			            scanf("%s", &Nombre);
			            if (strcmp(Nombre,User_Daniel_Preset) == 0){ //Se toma en caso de que la Nota se este ingresando al usuario Daniel
			                
				            printf("Ingrese la Nota del 1 Corte:\n");
				            scanf("%f", &Nota1D);
				                
				            printf("Ingrese la Nota del 2 Corte:\n");
				            fflush(stdin);
				            scanf("%f", &Nota2D);
				                
				            printf("Ingrese la Nota del 3 Corte:\n");
				            fflush(stdin);
				            scanf("%f", &Nota3D);
				                
				            PromedioD = (Nota1D + Nota2D + Nota3D) / 3.0;
				            printf("\nLa Nota final de %s es de %.1f", Nombre, PromedioD); //Se muestra el promedio de estudiante Daniel
						}
							
						else if(strcmp(Nombre,User_Juan_Preset) == 0){ //Se toma en caso de que la Nota se este ingresando al usuario Juan
				                
					        printf("Ingrese la Nota del 1 Corte:\n");
					        scanf("%f", &Nota1J);
					                
					        printf("Ingrese la Nota del 2 Corte:\n");
					        fflush(stdin);
					        scanf("%f", &Nota2J);
					                
					        printf("Ingrese la Nota del 3 Corte:\n");
					        fflush(stdin);
					        scanf("%f", &Nota3J);
					                
					        PromedioJ = (Nota1J + Nota2J + Nota3J) / 3.0;
					        printf("\nLa Nota final de %s es de %.1f", Nombre, PromedioJ);
						}
						
						else if(strcmp(Nombre,User_Andres_Preset) == 0){ //Se toma en caso de que la Nota se este ingresando al usuario Andres
				                
					        printf("Ingrese la Nota del 1 Corte:\n");
					        scanf("%f", &Nota1A);
					                
					        printf("Ingrese la Nota del 2 Corte:\n");
					        fflush(stdin);
					        scanf("%f", &Nota2A);
					                
					        printf("Ingrese la Nota del 3 Corte:\n");
					        fflush(stdin);
					        scanf("%f", &Nota3A);
					                
					        PromedioA = (Nota1A + Nota2J + Nota3J) / 3.0;
					        printf("\nLa Nota final de %s es de %.1f", Nombre, PromedioA);
					            
						}
						
						else{
				            	printf("No hay un Usuario con ese nombre en la base por favor Verifique\n");
				            }
					}
					
						else if (Opcion == 2){
							printf("Que tenga un buen dia\n");
						}
						
						else {
							printf("Ingrese una opcion Valida\n"); // En caso de no poner 1 o 2 Se muestra este mensaje
						}
			}
			
			else if (strcmp(User, User_Daniel_Preset) == 0 && strcmp(KeyWord, KeyWord_Daniel_Preset) == 0) { //Usuario y clave de Daniel
				
					printf("\nSus Notas son de es de %.1f,%.1f,%.1f", Nota1D,Nota2D,Nota3D); //Se muestran las notas de Daniel
		        	printf("\nLa Nota final de %s es de %.1f", Nombre, PromedioD); //Se muestra el promedio de estudiante Daniel
			}
			
			else if (strcmp(User, User_Daniel_Preset) == 0 && strcmp(KeyWord, KeyWord_Daniel_Preset) == 0) { //Usuario y clave de Andres
			printf("\nSus Notas son de es de %.1f,%.1f,%.1f", Nota1A,Nota2A,Nota3A); //Se muestran las notas de Andres
		        printf("\nSu Nota final de es de %.1f", PromedioA); //Se muestra el promedio de estudiante Andres
		}


return 0;	
}
