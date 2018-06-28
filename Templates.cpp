#include <iostream>
using namespace std;

template <class tipo> 
tipo mayor(tipo dato1, tipo dato2){
  return (dato1 > dato2 ? dato1 : dato2);
}
int main(){
    int a = 8, b = 12, n; 
    float c = 5.2, d = 2.5, m; 
    
    n = mayor <int> (a,b); // Usando enteros
    m = mayor(c,d);        // Usando reales
    
    cout << "Entero mayor: " << n << endl;
    cout << "Real mayor: " << m << endl;
    
    return 0; 
}
