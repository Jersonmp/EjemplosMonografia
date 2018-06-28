#include<iostream>
using namespace std; 

class Figura {
  public:
  	float base;
  	float altura; 
	void Mostrar();
  };
  
  int main(){
  	Figura f1;
  	f1.base=4.0;
  	f1.altura=2.3;
  	cout<< "La base de la figura es: "<<f1.base<<endl;
  	cout<< "La altura de la figura es: "<<f1.altura;  	
  }
