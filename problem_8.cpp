//
// Created by bjtor on 25/3/2023.
//
#include <iostream>

using namespace std;
/* Write an algorithm that determines if a number is even. */
int main(){
    int number;
    cout << "please write a number: ";
    cin >> number;

    if(number%2==0){
        cout << "your number is even";
    }else{
        cout << "your number is odd";
    }
    return 0;
}