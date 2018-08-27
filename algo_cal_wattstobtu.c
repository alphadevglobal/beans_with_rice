#include <stdio.h>
#define NULL 0
int main(){
	int btu,watts,tipo,result;
	
	printf("Watts para btu digite 1, de BTU para Watts digite 2:");
	scanf("%d",&tipo);

//Condicao de Watts para BTU
	if(tipo==0){
	printf("Informe um valor para continuar..");

	}
	if (tipo==1){
		printf("Informe o valor em Watts:");
		scanf("%d",&watts);
	
		result=(watts*3.412141633);
        	printf("Resultado de Watts para BTU:%d \n",result);
	}

//Calculo de BTU para Watts
	if(tipo==2){
                printf("Informe o valor em BTU:");
                scanf("%d",&btu);
        
                result=(btu*3.412141633);
                printf("Resultado de BTU para Watts:%d \n",result);
        }
	
}
