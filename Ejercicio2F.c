#include <stdio.h>

#define OPC_UNO 1
#define OPC_DOS 2

const int DEF_OPCION = OPC_DOS;

void mostrar_mensaje(int opcion_evaluar){
	switch(opcion_evaluar){
		case OPC_UNO:
			printf("Ya empezaste, te felicito\n");
			break;
			default:
			printf("Practica, practica, practica...ah y apoyate con docentes e internet\n");
	}
}

int elegir_opcion_menu(int opcion_actual){
    do{
	    printf("1.-Quiero aprender a Programar\n");
		printf("2.-Quiero ser experto en programando\n");
        printf("Ingrese una Opcion:\n");

		scanf("%i", &opcion_actual);
	}while(opcion_actual> DEF_OPCION);
      
	return opcion_actual;
}   

int main(){
	int opcion = DEF_OPCION;
	opcion = elegir_opcion_menu(opcion);
	mostrar_mensaje(opcion);
	return 0;
}
