/receive three numbers calculate and show the multiplication of these numbers/
  
#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	float num1;
	float num2;
	float num3;
	
	printf("Digite o primeiro número: \n");
	scanf("%f", &num1);
	
	printf("Digite o segundo número: \n");
	scanf("%f", &num2);
	
	printf("Digite o terceiro número: \n");
	scanf("%f", &num3);
	
	float result = num1 * num2 * num3;
	printf("O resultado  será = %f", result);
	
}
