#include <iostream>
int main(){
	float metro = 0;
	int escolha = 0;
	float resultado = 0;
	
	std:: cout << "Digite uma distancia em metros para ser convertida: ";
	std:: cin >> metro;
	
	std:: cout << "Escolha uma dessas opcoes para a conversao: \n 1- polegadas \n 2- pes \n 3- jardas \n 4-milhas \n 5-centimetros \n 6-kilometros\n";
	std:: cin >> escolha;
	if(escolha == 1){
		resultado = metro * 39.27;
		std:: cout << resultado << " polegadas";
	} else if(escolha == 2){
		resultado = metro * 3281;
		std:: cout << resultado << " pes";
	}else if(escolha == 3){
		resultado = metro / 1094;
		std:: cout << resultado << " jardas";
	}else if(escolha == 4){
		resultado = metro / 1069;
		std:: cout << resultado << " milhas";
	}else if(escolha == 5){
		resultado = metro * 100;
		std:: cout << resultado << " centimetros";
	}else if(escolha == 6){
		resultado = metro * 1000;
		std:: cout << resultado << " kms";
	}
}
