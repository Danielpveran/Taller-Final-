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
    
    
    	printf("\n\t\t\t SIGN IN \n");
		printf("\n Ingrese su Usuario:");
		scanf("%s",User);
		
		printf("\n Ingrese su Contraseña:");
		scanf("%s",KeyWord);
		
		if (strcmp(User, User_Teacher_Preset) == 0 && strcmp(KeyWord, KeyWord_Preset) == 0)
		
			while(1){
						        printf("\nBienvenido a su Cajero\n");
		        printf("1. Ingresar Datos del Estudiante\n");
		        printf("2. Editar notas\n");
		        scanf("%i", &Opcion);
			}
}
