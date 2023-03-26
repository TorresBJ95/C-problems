//
// Created by bjtor on 25/3/2023.
//
#include <iostream>

using namespace std;
/*Read two real numbers and print the largest of them.*/
int main(){
    float realNumber_1;
    float realNumber_2;

    cout << "write the first number please: ";
    cin >> realNumber_1;
    cout <<"write the second number please: ";
    cin >> realNumber_2;

    if (realNumber_1 > realNumber_2){
        cout << "the number: "<< realNumber_1 <<" is greather than "<< realNumber_2<<endl;
    }else if(realNumber_1 < realNumber_2){
        cout << "the number: "<< realNumber_1 << " is less than " << realNumber_2<< endl;

    }else{
        cout << "both numbers are equal"<< endl;
    }

    return 0;
}