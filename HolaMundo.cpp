#include <iostream>

using namespace std;

int main(){
    float Monto, factor;
    int dias;

    Monto = 80;
    factor = 1.2;
    dias = 1;

    while (Monto <= 400000)
    {
        Monto = Monto * factor;
        cout << "Van #" << dias << " y el monto es : " << Monto << "\n";
        dias++;
    }
    return 0;
}