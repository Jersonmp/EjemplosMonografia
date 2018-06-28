#include<iostream>
#include <math.h>
using namespace std;

class Figura {
  	public:
  		float base;
  		float altura; 
	public:
		void captura();
		virtual float perimetro()=0;
		virtual float area()=0;
};

class Rectangulo: public Figura { 
	public:
  		void imprime();
  		float perimetro(){return 2*(base+altura);}
  		float area(){return base*altura;}
};

void Figura::captura()
{
	 cout << "CALCULO DEL AREA Y PERIMETRO DE UN TRIANGULO ISÓSCELES Y UN RECTANGULO:" << endl;
	 cout << "escribe la altura: ";
	 cin >> altura;
	 cout << "escribe la base: ";
	 cin >> base;
	 cout << "EL PERIMETRO ES: " << perimetro();
	 cout << "EL AREA ES: " << area();
	 getchar();

}


