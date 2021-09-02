#include <iostream>
#include <string>
using namespace std;

int main() {
	float pretensao = 0;
	string nome;
	
	cout << "Digite o seu nome! \n";
	cin >> nome;
	cout << "Digite sua pretensao salarial: \n";
	cin >> pretensao;
	
	if(pretensao < 1300){
		cout << "O cargo que" << nome <<  " almeja e o de auxiliar de producao!";
	}else if(pretensao >= 1300 && pretensao<= 2500){
		cout << "O cargo que" << nome <<  " almeja e o de lideranca!";
	}else {
		cout << "Infelizmente nao possuimos vagas adequadas ao desejo de " << nome;
	}
	
	
}
