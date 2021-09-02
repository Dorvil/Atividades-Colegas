#include<iostream>
int main(){
	
	int numeroCerto = 4;
	int numero = 0;
	
	std:: cout << "Digite um numero entre 0 e 10 e tente a sorte tentando adivinhar qual o sorteado! \n";
	std:: cin >> numero;
	
	if (numeroCerto == numero){
		std:: cout << "Parabens voce ganhou!";
	}else {
		std:: cout <<  "Errou!";
	}
	
	
}
