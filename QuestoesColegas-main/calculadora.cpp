#include<iostream>
int main(){
	float opcao = 0;
	float numero = 0;
	float numero2 = 0;
	float resultado = 0;
	
	std:: cout << "Digite um numero: \n";
	std:: cin >> numero;
	std:: cout << "Digite outro numero: \n";
	std:: cin >> numero2;
	std:: cout << "Escolha entre uma dessas 4 funcoes: \n 1-Adicao \n 2-subtracao \n 3-Divisao \n 4-multiplicacao: ";
	std:: cin >> opcao;
	if (opcao == 1){
		resultado =numero + numero2;
	}else if (opcao == 2){
		resultado =numero - numero2;
	}else if (opcao == 3){
		resultado = numero / numero2;
	}else if (opcao == 4){
		resultado =numero * numero2;	
	}
	if (resultado < 0){
		std:: cout << "Resultado transformado em positivo = " << resultado * -1;
	}else{
		std:: cout << resultado;
	}
}
