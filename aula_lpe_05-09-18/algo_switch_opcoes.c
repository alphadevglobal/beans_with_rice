/* Question 23 LPA and LPE */

#include <stdio.h>

int main() {
	int opcao,a,b,result;

	printf("1- Verificar se um dos números lidos é ou não multiplo do outro \n 2- Verificar se os dois números lidos são pares \n 3- Verificar se a media dos dois numeros é maior ou igual a 7 \n 4- Sair \n Selecione a opcao desejada: \n");

	scanf("%d",& opcao);

	switch (opcao){
		case 1:
			printf("=== Você selecionou 1 === \n");
			printf("Enter number 1:");
			scanf("%f",& x);

			printf("Enter number 2:");
			scanf("%f",& y);
			
			r=x+y;

			printf("Resultado é: %f \n", r);
		break;

                case 2:
                        printf("=== Você selecionou 2 === \n");
                        printf("Enter number 1:");
                        scanf("%f",& x);

                        printf("Enter number 2:");
                        scanf("%f",& y);

                        r=x-y;

                        printf("Resultado é: %f \n", r);
                break;

                case 3:
                        printf("=== Você selecionou 3 === \n");
                        printf("Enter number 1:");
                        scanf("%f",& x);

                        printf("Enter number 2:");
                        scanf("%f",& y);

                        r=x*y;

                        printf("Resultado é: %f \n", r);
                break;

                case 4:
                        printf("=== Você selecionou 4 === \n");
                        printf("Enter number 1:");
                        scanf("%f",& x);

                        printf("Enter number 2:");
                        scanf("%f",& y);

                        r=x/y;

                        printf("Resultado é: %f \n", r);
                break;
}
}
