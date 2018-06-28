#include<iostream>
using namespace std; 

class Figura {
  public:
  	float base;
  	float altura; 
  	void Mostrar(float base, float altura);
  };
  
class Rectangulo:public Figura{
	
	void Area();
	
};

  int main(){
  	Figura Figura1;
  	Figura1.base=4.0;
  	Figura1.altura=2.3;
  	cout<< "La base de la figura es: "<<Figura1.base<<endl;
  	cout<< "La altura de la figura es: "<<Figura1.altura<<endl; 
	Rectangulo Rectangulo1;
	Rectangulo1.base=25.23;
	Rectangulo1.altura=6.25;
	cout<< "La base del rectangulo es: "<<Rectangulo1.base<<endl;
  	cout<< "La altura del rectangulo  es: "<<Rectangulo1.altura<<endl;  
	  
		
  }
