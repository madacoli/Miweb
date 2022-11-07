#include <iostream>
#include <string>

//using namespace std;

int main(){
    float Monto, factor;
    int dias;
    std::string mensaje =  "Hola Mundo";

    //std::cout << mensaje << std::endl;

    Monto = 137;
    factor = 1.2;
    dias = 1;

    while (Monto <= 400000)
    {
        Monto = Monto * factor;
        std::cout << "Van #" << dias << " y el monto es : " << Monto << "\n";
        dias++;
    }


    return 0;
}