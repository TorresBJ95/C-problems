//
// Created by bjtor on 24/3/2023.
//

#include <iostream>
#include <cmath>
using namespace std;
/*Given the radius R of a sphere, calculate and print its surface area and volume */
int main(){
    int radio;
    const double PI = M_PI;
    cout<<"please write the radius of a sphere: ";
    cin>> radio;
    double area = 4 * PI * pow(radio, 2);
    double volumen = (4.0 /3.0) * PI * pow(radio, 3);
    cout<<"sphere's area: "<<area<< endl;
    cout<<"sphere's volume "<<volumen<<endl;


    return 0;
}