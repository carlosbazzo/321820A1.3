// Quest�o 2 - Paciente saud�vel


#include<stdio.h>
#include<stdlib.h>

int main ()
{
// inserindo apenas uma variavel que contemplara todas as respostas fornecidas pelo usu�rio
 	char resp;
 	int temp;

printf ("O paciente se sente bem? \n");
scanf (" %c%*[^\n]", &resp);

// colocado para reconhecer apenas o S, porque caso o usu�rio digite sim ou apenas S o programa funcionara igual.

if(resp == 's') {
	printf ("O paciente esta saudavel!!");
} else if (resp == 'n') { 
	printf ("O paciente esta com dor? \n");
}
	scanf (" %c%*[^\n]", &resp);
	
if(resp == 's') {
	printf ("O paciente esta doente!! \n");
} else if (resp == 'n') { 
	printf ("Qual a temperatura do paciente? \n");
	/* fazendo com a segunda escolha j� seja a pr�xima pergunta, e usando a compara��o  usando valores 
	apenas no ultimo exemplo, quando falado da sua temperatura. */
	}
	
 scanf ("%i", &temp);
 
 if (temp <=37) {
 	printf ("Saudavel!! \n");
 } else if (temp >=37) {
 	printf ("Doente\n");
 }
 
return 0;
}




