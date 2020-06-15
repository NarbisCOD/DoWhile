#include <stdio.h>

const int OPC_UNO = 1;
const int OPC_DOS = 2;


                            
int main(){
	int opcion = -1;

	do{
		printf("1.-Quiero aprender a Programar\n");
		printf("2.-Quiero ser experto en programando\n");
        printf("Ingrese una Opcion:\n");

		scanf("%i", &opcion);
	}while(opcion > OPC_DOS);
        if (opcion == OPC_DOS){
            printf("Ya empezaste, te felicito\n");
        }else{
            printf("Practica, practica, practica...ah y apoyate con docentes e internet\n");
    }
	return 0;


}
