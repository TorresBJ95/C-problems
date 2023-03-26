//
// Created by bjtor on 25/3/2023.
//

#include <iostream>

using namespace std;
/*Write an algorithm that determines if a number M is divisible by N. */
int main(){
    int number_1;
    int number_2;
    cout<<"write the first number: ";
    cin>>number_1;
    cout<<"write the second number: ";
    cin>>number_2;
    if (number_1%number_2==0){
        cout<<"the number: "<< number_1 <<" is divisible for the number: "<< number_2<<endl;
    }else{
        cout<<"the number doesnt divisible"<<endl;
    }
    return 0;
}