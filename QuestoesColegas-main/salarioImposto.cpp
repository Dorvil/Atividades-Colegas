#include <iostream>
int main(){
	float salario = 0;
	float porcent = 0;
	float deducao = 0;
	std:: cout << "Digite seu salario: ";
	std:: cin >> salario;
	
	if (salario <= 1900){
		porcent = 0;
		std:: cout << "O total de imposto deduzido de seu salario e 0.";
	}else if (salario > 1900 && salario <= 2500){
		porcent = 2;
		deducao = (salario * porcent) / 100;
		std:: cout << "O total de imposto deduzido de seu salario e " << deducao;
	}else if (salario > 2500 && salario <= 3700){
		porcent = 3;
		deducao = (salario * porcent) / 100;
		std:: cout << "O total de imposto deduzido de seu salario e " << deducao;
	}else if (salario > 3700 && salario <= 5000){
		porcent = 4.5;
		deducao = (salario * porcent) / 100;
		std:: cout << "O total de imposto deduzido de seu salario e " << deducao;
	}else {
		porcent = 6;
		deducao = (salario * porcent) / 100;
		std:: cout << "O total de imposto deduzido de seu salario e " << deducao;
	}
}
