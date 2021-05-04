#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Spanish");

    double m1, m2, b1, b2, xi, yi;

    cout << "Ingrese valores de dos rectas para hayar la intersección entre ellas" << endl;
    cout << "Ingrese pendientes de ambas rectas y luego ordenadas al origen de ambas rectas" << endl;
    cin >> m1 >> m2 >> b1 >> b2;

    cout << "Usted ingresó: y = " << m1 << "x + " << b1 << " e y = "  << m2 << "x + " << b2 << endl;

    if(m1 == m2){
        if ((b1 == b2)){
            cout << "El sistema es compatible indeterminado, son la misma recta" << endl;
            return 0;
        } else {
            cout << "El sistema es incompatible, las rectas son paralelas y no se intersecan" << endl;
            return 0;
        }
    }

    xi = (b2 - b1)/(m1 - m2);
    yi = m1 * xi + b1;

    cout << "Las rectas se intersecan en el punto (" << xi << ";" << yi << ")" << endl;
    cout << "Fin del programa." << endl;

    return 0;
}