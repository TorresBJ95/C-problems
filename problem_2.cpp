//
// Created by bjtor on 24/3/2023.
//

#include <iostream>
using namespace std;

/*Read two numbers by keyboard and print:
the sum of both
 Subtraction (the first minus the second)
 Multiplication
 The division */

int main(){
    int number_1;
    int number_2;
    float number_3;
    cout << "please write the first number: "<<endl;
    cin>>number_1;
    cout << "please write the second number: "<< endl;
    cin>>number_2;
    number_3 = (float)number_1 / number_2;
    cout<<"the sum of both is: "<< number_1+number_2 <<endl;
    cout<<"the subtraction of both is " << number_1-number_2<<endl;
    cout<<"the Multiplitaction of both is "<< number_1*number_2<<endl;
    cout<<"the Division of both is " << number_3 << endl;

    return 0;
}