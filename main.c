#include <stdio.h>
#nclude <stdlib.h>
#include <unistd.h>
 
int main(int argc, char **argv){
	
	int elementos = 0;
	char c = 0;
	
	
	//Aqui manejamos las opciones.
	//El argumento -p tiene un argumento, que es 
	//el numero de elementos a pedir (por eso el :)
	while ((c = getopt (argc, argv, "p:")) != -1){
		switch(c){
			case 'p':
				elementos = atoi(optarg);
				break;
			default:
				printf("Argumento invalido\n");
				exit(1);
		}
	}

	//Los resultados de sus calculos van en estas variables.
	//Puede declarar más variables si lo necesita.
	float sum = 0.0f;
	float max_imc = 0.0f;
	float peso=0.0f;
	float altura=0.0f;
	float imcActual=0.0f;
	if(p<=0){
		printf("numero de personas invalido");
		exit(1);
	}else{
		for(int i=0 ; i<p;i++){
			printf("Peso: ");
			scanf("%.2f",&peso);
			if(peso<=0){
				printf("Numero invalido\n");
				exit(1);
			}
			printf("\nAltura: ");
			scanf("%.2f",altura);
			if(altura<=0){
				printf("Numero invalido\n");
				exit(1);
			}
			imcActual=peso/(altura * altura);
			if(imcActual>max_imc){
				max_imc=sum;
			}
			sum+=imcActual;
			

		}
	sum=(sum/p);
			

	}
		
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);

