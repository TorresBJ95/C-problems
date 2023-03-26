//
// Created by bjtor on 25/3/2023.
//
#include <iostream>

using namespace std;
/*Read a real number and say if it is greater than, less than, or equal to zero.*/
int main(){
    float realNumber;
    cout << "please write a real number: ";
    cin >> realNumber;
    if (realNumber > 0){
        cout << "your number is greater than zero";
    }else if(realNumber < 0){
        cout << "your number is less than zero";
    }else{
        cout << "your number is zero";
    }

    return 0;
}