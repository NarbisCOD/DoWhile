#include <stdio.h>

const int EXCESO = 1;

int main(){
	int senial = EXCESO;

	do{
		printf("recibiendo senial:\n");
		printf("[1]Exceso  - [2]Sin exceso\n");
		scanf("%i", &senial);
	}while(senial != EXCESO);


	printf("PIPIPIPIPIPIPIPIPIPIP D:");
	return 0;
}
