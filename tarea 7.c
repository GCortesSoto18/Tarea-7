#include <stdio.h>

void ciclo_sumaimpares ( int numero){
int i,sumaimpares;
i = 1;
sumaimpares=0;
	do {
		if  (i % 2 == 1){
			printf ("\n numero impar %d", i);
			sumaimpares=sumaimpares + i;
			
			
		}
		
		else if  (i % 1 ==0){
			
		}
		i++;
	} while(i<= numero);
	
	printf (" \n la la suma  de los numeros impares es : %d ",sumaimpares);
}

int main(int argc, char *argv[]) {
	int numero;
	printf (" ingresa un numero ");
	scanf (" %d" , & numero);
	
	ciclo_sumaimpares (numero);
	
	return 0;
}

