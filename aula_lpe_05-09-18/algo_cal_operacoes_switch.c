/* Question 23 LPA and LPE */

#include <stdio.h>

int main() {
	int opcao,a,b,c,d;
	float x,y,z,r;

	printf("1- Adicao \n 2- Subtracao \n 3- Multiplicacao \n 4- Divisao \n Selecione uma opcao: \n");

	scanf("%d",& opcao);

	switch (opcao){
		case 1:
			printf("=== Você selecionou soma === \n");
			printf("Enter number 1:");
			scanf("%f",& x);

			printf("Enter number 2:");
			scanf("%f",& y);
			
			r=x+y;

			printf("Resultado é: %f \n", r);
		break;
                case 2:
                        printf("=== Você selecionou subtracao === \n");
                        printf("Enter number 1:");
                        scanf("%f",& x);

                        printf("Enter number 2:");
                        scanf("%f",& y);

                        r=x-y;

                        printf("Resultado é: %f \n", r);
                break;

                case 3:
                        printf("=== Você selecionou multiplicacao === \n");
                        printf("Enter number 1:");
                        scanf("%f",& x);

                        printf("Enter number 2:");
                        scanf("%f",& y);

                        r=x*y;

                        printf("Resultado é: %f \n", r);
                break;

                case 4:
                        printf("=== Você selecionou divisao === \n");
                        printf("Enter number 1:");
                        scanf("%f",& x);

                        printf("Enter number 2:");
                        scanf("%f",& y);

                        r=x/y;

                        printf("Resultado é: %f \n", r);
                break;
}
}
