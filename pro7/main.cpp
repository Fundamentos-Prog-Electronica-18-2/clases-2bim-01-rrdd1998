#include <iostream>

using namespace std;

void tablamultiplicar (int numero, int limite){
    int contador=1;
    while (contador<=limite){
      int operacion  = contador*numero;
       cout<<contador<<" x "<<numero<<" = "<<tablamultiplicar<<endl;
      contador=contador+1;
    }
}
void tablasumar(int numero, int limite){
    for (int i=1;i<=limite;i++){
     int tablasumar  = i+numero;
        cout<<numero<<" x "<<i<<" = "<<tablasumar<<endl;
    }

    }
int main()
{
    int numero;
    int limite;
    int opcion;


    cout << "ingrese el numero" << endl;
    cin >> numero;
    cout << "ingrese un limite" << endl;
    cin >> limite;
    cout << "elija la opcion" << endl;
    cin >> opcion;

    if (opcion == 1){
         tablamultiplicar(numero, limite);
    }else{
        if(opcion == 2){
            tablasumar(numero,limite);
        }else{
            cout << "tabla incorrecta"<<endl;
        }
    }
    return 0;
}
