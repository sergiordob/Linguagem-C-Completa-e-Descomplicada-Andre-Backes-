#include <stdio.h>

    int main (){

        int numero, somador, cont, cont2;

        cont = somador = 0;

            while (cont < 10){
                printf("Digite um numero inteiro: ");
                scanf("%d", &numero);

                    if (numero >=0)
                    {
                        somador = somador + numero;
                        cont2++;
                    }

            cont++;
            }

        printf("\nMedia dos numeros positivos: %d", somador/cont2);
    }