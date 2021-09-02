#include<iostream>
int main(){
	float caloriasMin = 0;
	float caloriasMax = 0;
	float peso = 0;
	int opcao = 0;
		std:: cout << "Digite seu peso: ";
		std:: cin>> peso;
		std:: cout << "Escolha entre uma dessas opcoes: \n 1- Emagrecer \n 2-Manter o Peso \n 3-Engordar \n";
		std:: cin >> opcao;
		if (opcao == 1){
			caloriasMin = 20 * peso;
			caloriasMax = 25 * peso;
			std:: cout << "Consuma no minimo: " << caloriasMin << " Cal" << " \n E consuma no maximo " << caloriasMax << "Cal"; 
	}else if (opcao == 2){
			caloriasMin = 25 * peso;
			caloriasMax = 30 * peso;
			std:: cout << "Consuma no minimo: " << caloriasMin << " Cal" << " \n E consuma no maximo " << caloriasMax << "Cal"; 
	}else if (opcao == 3){
			caloriasMin = 30 * peso;
			caloriasMax = 35 * peso;
			std:: cout << "Consuma no minimo: " << caloriasMin << " Cal" << " \n E consuma no maximo " << caloriasMax << "Cal"; 
	}else {
		std:: cout << "Digite uma opcao valida.";
	}	
}
