#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "spanish");

    double km_h, m_s;

    cout << "Ingrese un valor en km/h (los decimales se marcan con PUNTO):" << endl;
    cin >> km_h;

    m_s = km_h / 3.6;

    cout << "El valor ingresado es equivalente a: " << m_s 
        << " metros por segundo." << endl;

    return 0;
}