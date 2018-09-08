#include <stdio.h>

int main() {
	int deci,octa,hexadeci,bina,tipo,result;

	printf("Escolha o que deseja converter: \n 1.Decimal \n 2. Hexadecimal \n 3. Octal \n 4. Binario \n");
	scanf("%d"),&tipo;
	
	if(tipo==1){
	printf("Informe o valor em decimal:");
	scanf("%d",&deci);
	result=(deci**2);
	printf("Resultado e:%d"result);
	}

}
