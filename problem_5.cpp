//
// Created by bjtor on 25/3/2023.
//

#include <iostream>
using namespace std;

/* Read the base and the height of a rectangle, calculate the perimeter and the surface. */
int main(){
    int base;
    int altura;
    cout << "por favor escriba la base: ";
    cin >> base;
    cout << "por favor escriba la altura: ";
    cin >> altura;

    double perimetro = 2*(base + altura);
    double superficie = base * altura;

    cout<< "el perimetro es: "<< perimetro <<endl;
    cout<< "la superficie es: "<< superficie<<endl;




    return 0;
}