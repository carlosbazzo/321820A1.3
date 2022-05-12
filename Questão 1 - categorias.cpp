// Questão 1 - Categorias  

#include<stdio.h>
#include<stdlib.h>



int main ()
{                                                                         
    char categoria;
    int quantidade, soma, total;
    float media;

    quantidade = 0;
    soma = 0;
    total = 0;

    do
    {   
        printf("Informe a categoria:  ");       // esta parte ira ler os dados entrados para armazenalos
        fflush(stdin);
        scanf("%c", &categoria);
        if (categoria != 'A' && categoria != 'B' && categoria != 'C') //esta parte vai ler as categorias VALIDAS inceridas e ignorar as demais
        {
            break;
        }

        do
        {
            printf("Informe a quantidade:  ");       //ira armazenar a quantidade que cada categoria foi digitada
            fflush(stdin);
            scanf("%d", &quantidade);

        } while (quantidade <= 0);                  //garantira que a quantidade sera maior que 0

        soma = soma + quantidade;
        total++;
        media = (float) soma / (float) total;      //media usando float             

    } while (categoria == 'A' || categoria == 'B' || categoria == 'C');

    printf("A media dos produtos eh: %.2f", media);     // Calculando a média usando o float                        

    return 0;
}

