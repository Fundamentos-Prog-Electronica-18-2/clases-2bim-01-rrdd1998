
#include <iostream>

using namespace std;

int edad (int anio ){
     int edad = 2018 - anio;
    cout << "La edad es: " << edad<< "." << endl;
    return edad;

}

int main()
{
    string nombre;
    string apellido;
    int anio;

    cout << "ingrese nombre" << endl;
    cin >> nombre;
    cout << "ingrese su apellido" << endl;
    cin >> apellido;
    cout << "ingrese su año de nacimiento" << endl;
    cin >> anio;

edad(anio);

cout << "nombre"<< "" <<nombre << endl;
        cout << "apellido"<< "" << apellido << endl;

    return 0;
}
