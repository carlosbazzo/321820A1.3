// Questão 5 - Numero mágico

#include<stdio.h>
#include<stdlib.h> // para usar o comando rand
#include<locale.h>
#include<time.h> // para que cada vez gere um valor diferente



int main ()
{
int magic, num1;

// Primeiro inserimos o que o usuário tem que fazer.
	printf ("Digite um numero, entre 0 e 10: \n\n");


		srand (time(NULL)); // este comando usa a hora do PC para que cada vez o programa escolha um valor diferente
	
		magic = rand () % 10; // comando que ira sortear o numero
	
	while (num1 != magic) { //enquanto o numero digitado for diferente ao sorteado ele fara o loop
		printf ("");
		scanf ("%i", &num1);

 	if (magic < num1) {
		printf("Errado, muito alto\n\n");
}  else if (magic > num1) {
		printf ("Errado, muito baixo\n\n");
	}

	} //fechando comando while
	 if (magic = num1) {  //caso o usuario acerte o programa sai do laço e finaliza.
		printf ("Acertou!!! \n");
	}


		printf ("%i eh o numero magico", magic); // e finalmente mostra o numero que o programa escolheu. 

return 0;
}

	
	





