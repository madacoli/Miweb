#include <iostream>
#include <string>

//using namespace std;

int suma(int, int);

int main(){

    std::cout << "La suma de los numeros es : " << suma(4, 6) << std::endl;
    std::cout << "La suma de los numeros es : " << suma(1123, 112) << std::endl;

    return 0;
}

int suma(int numero1, int numero2){
    return numero1 + numero2;
}
