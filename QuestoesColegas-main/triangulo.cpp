#include <iostream>
#include <cmath>
int main(){
	float a , b ,c , d , e , f;
	float area = 0;
	float area2 = 0; 
	float areaQuad = 0;
	float areaQuad2 = 0;
	std:: cout << "Diga as areas referentes aos 3 lados de um triangulo e compare as com a area de um segundo triangulo \n ";
	std:: cout << "Primeiro triangulo: \n Lado A ";
	std:: cin >> a;
	std:: cout << "Lado B: ";
	std:: cin >> b;
	std:: cout  << "Lado C ";
	std:: cin >> c;
	area = (a + b + c) / 2;	
	std:: cout << "Segundo triangulo: \n Lado A ";
	std:: cin >> d;
	std:: cout << "Lado B: ";
	std:: cin >> e;
	std:: cout  << "Lado C ";
	std:: cin >> f;
	area = (a + b + c) / 2;
	area2 = (d + e + f) / 2;
		
	areaQuad = sqrt(area * (area - a)*(area - b)*(area - c));
	areaQuad2 = sqrt(area2 * (area2 - d)*(area2 - e)*(area2 - f));
	if (areaQuad > areaQuad2){
		std:: cout << "A area do primeiro quadrado e equivalente "<< areaQuad << " logo sendo maior que a do segundo que e equivalente a "<< areaQuad2;
	}else if (areaQuad2 > areaQuad){
		std:: cout << "A area do segundo quadrado e equivalente "<< areaQuad2 << " logo sendo maior que a do primeiro que e equivalente a "<< areaQuad;
	}else {
		std:: cout << "Os dois sao equivalentes!";
	}	  
}
