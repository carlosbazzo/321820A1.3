// Questão 6 - numeros positivos - triângulo retangulo

#include<stdio.h>
#include<stdlib.h>

 
int main ()
{

	int num1, contar; //variaveis que serão usadas 
	int contador=1; // contador
	char continuar;

    	do{contador = 0;

	printf("Informe um numero positivo: "); //leitura da variavel 
	scanf("%d", &num1);
	
	
    	while(num1 <= 0) {    		
    printf("Informe um numero positivo: ");
    scanf("%d", &num1);
    }	while (contador <= num1)
    {	
	printf (" \n");
								
	    for (contar = 1; contar <= contador; contar++) { //comando para o contador
	printf (" %d ", contador);
        }
        contador++;
    }  

    printf("\n\nDeseja digitar outro numero? (S ou N)\n"); // laço ira pedir se encerra o programa ou deve continuar
    scanf(" %c", &continuar);

    }	while(continuar == 'S' || continuar == 's');

    return 0;
}
