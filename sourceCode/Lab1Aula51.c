#include<stdio.h>

int main() {
	//exemplo de corte de internet
	int consumo;
	int consumoMaximo = 8;
	int atingiuLimite;
	int pagouAConta;//pagou a conta
	int vaiCortarAInternet;

	printf("Digite o valor do consumo: ");
	scanf("%i", &consumo);
	
	//exerc�cio: fazer a leitura do valor da vari�vel pagouAConta
	//incluir um printf para ficar bonitinho
	//executar v�rias vezes com valores diferentes, para ver se est� certo

	printf("Digite o valor de 'pagou a conta': ");
	scanf("%i", &pagouAConta);
	
	atingiuLimite = consumo >= consumoMaximo;
	vaiCortarAInternet = atingiuLimite || !pagouAConta;
	
	//imprimir o resultado do corte ou n�o da internet
	printf("\nVai cortar a internet: %i", vaiCortarAInternet);	
}
