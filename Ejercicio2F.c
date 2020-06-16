#include <stdio.h>

#define OPC_UNO 1
#define OPC_DOS 2
#define MENJ_ERROR ("----------/--------\nOpcion Invalida, verifique las opciones disponibles\n\n")
#define MENJ_OPC_UNO ("1.-Quiero aprender a Programar\n")
#define MENJ_OPC_DOS ("2.-Quiero ser experto en programando\n")
#define MENJ_RESUL_UNO ("Ya empezaste, te felicito\n")
#define MENJ_RESUL_DOS ("Practica, practica, practica...ah y apoyate con docentes e internet\n")



const int DEF_OPCION = OPC_DOS;

void mostrar_mensaje(int opcion_evaluar){
	switch(opcion_evaluar){
		case OPC_UNO:
			printf(MENJ_RESUL_UNO );
			break;
			default:
			printf(MENJ_RESUL_DOS);
	}
}

int elegir_opcion_menu(int opcion_actual){
    do{
	    printf(MENJ_OPC_UNO);
		printf(MENJ_OPC_DOS);
        printf("Ingrese una Opcion:\n");
		scanf("%i", &opcion_actual);

		if((opcion_actual> OPC_UNO)|| (opcion_actual> OPC_DOS)){
			printf(MENJ_ERROR);
		}
		
	}while(opcion_actual> DEF_OPCION);
      
	return opcion_actual;
}   

int main(){
	int opcion = DEF_OPCION;
	opcion = elegir_opcion_menu(opcion);
	mostrar_mensaje(opcion);
	return 0;
}

