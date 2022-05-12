// Questão 4 - resto da divisão

#include <stdio.h>

int main()
   {
   	
   	
	int num1, num2, resto;
	
	
    printf("Digite o primeiro valor:\n");   //escanear os valores 
	scanf("%i", &num1);
	
	printf("Digite o segundo valor:\n");
	scanf("%i", &num2);
	
		if(num1==0||num2==0){
	printf("Nao eh possivel realizar divisao por zero\n");   // já encerrando o programa caso a divisão= x/0
		return 0;
	}	else if(num1>num2||num1==num2){
		resto = num1%num2;
	}
	else if(num1<num2){
		resto = num2%num1;
	}
	printf("O resto da divisao eh: %i\n", resto);
  return 0;
}
