// Quest�o 4 - resto da divis�o

#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

int main ()
{
 
    float num1, num2, resto; // variav�is float para que seja possivel trabalhar com numeros 'quebrados'

    printf("Informe o primeiro valor: \n");    //escanear os valores 
    scanf("%f", &num1);
    printf("Informe o segundo valor: \n");
    scanf("%f", &num2);

    if(num1 == 0 || num2 == 0)      // j� encerrando o programa caso a divis�o= x/0
    {
        printf("Nao eh poss�vel realizar divisao por zero!!! \n");
    }

    else if (num1 > num2)     
	    {
        resto = num1 % num2;
    } else  {
        resto = num2 % num1;
    }
    printf("O resto da divis�o � %d\n", resto);

    return 0;

}
