#include <iostream>

using namespace std;
void metodo1(){
 cout << "el metodo 1 imprime un mensaje" << endl;
}
string metodo2(){
return "mensaje" ;
}
int main(){
    metodo1();
    metodo2();
     string valor = metodo2();
     cout << valor << endl;
     return 0;
}



