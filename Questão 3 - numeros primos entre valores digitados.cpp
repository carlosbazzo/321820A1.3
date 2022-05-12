// Questão 3 - numeros primos entre valores 

#include<stdio.h>
#include<stdlib.h>


int main(void)
{

    char continuar;
    int inicio, fim, linha, i, j, primo;
	int pula=0;

    	do{
		pula=0;
	printf("Infome o valor do limite inferior do intervalo: \n");
	scanf("%i",&inicio);
	
		while(inicio<1){
	
	printf("O limite deve ser no minimo 1!\nInforme o limite inferior: \n");
	scanf("%i",&inicio);}
	printf("Informe o valor do limite superior do intervalo: \n");
	scanf("%i",&fim);
	
		while(inicio>fim){
			
	printf("O limite superior deve ser maior ou igual ao inferior!\nInforme o limite superior: \n");
	scanf("%i",&fim);}
	printf("Informe quantos numeros deseja imprimir por linha: \n");
	scanf("%i",&linha);            // definindo os limites inferiores e superiores
    		

		//parte responsável por fazer os numeros primos	
	for (i = inicio; i <= fim; i++) {
		if (i == 0 || i == 1) {
			primo = 0;
		} else {
			primo = 1; 
			for(j = 2; j < i; j++) { 
				if (i % j == 0) {
					primo = 0;
				}}}
		if (primo == 1) {
			printf("%i ", i);
			pula++;
			if(pula>=linha){
				printf("\n");
				pula=0;
			}}}
	// fim da parte do programa responsável por fazer os numeros primos

    
     printf("\n\nDeseja digitar outro numero? (S ou N)\n"); // laço ira pedir se encerra o programa ou deve continuar
    scanf(" %c", &continuar);

    }	while(continuar == 'S' || continuar == 's');
    
    return 0;
}

