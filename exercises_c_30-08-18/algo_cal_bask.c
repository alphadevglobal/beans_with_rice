#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (int argc, char** argv){
	float a,b,c,x1,x2,delta;

	printf("Enter value A:");
	scanf("%f",& a);

	printf("Enter value B:");
	scanf("%f",& b);

	printf("Enter value C:");
	scanf("%f",& c);

	delta = b*b - 4*a*c;
	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);

	if (delta < 0 ) {
		printf("A equacao nao possue raizes reais.n");
	}else {
		printf("O valor de x1: %.2fn",x1);
		printf("O valor de x2: %.2fn",x2);
	}
	system("pause");
	return 0;

}
