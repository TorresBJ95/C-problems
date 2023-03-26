//
// Created by bjtor on 25/3/2023.
//
#include <iostream>

using namespace std;
/*Read two numbers and then an option (can be “ + ”: addition, “ – “: subtraction, “ * ”:
multiplication or “ / “: division), depending on the option chosen, perform the calculation. */
int main(){
    int number_1;
    int number_2;
    int opction;
    cout << "write the first number: ";
    cin>> number_1;
    cout<< "write the second number: ";
    cin>> number_2;
    cout<<"please write the opction that you want:"<<endl;
    cout<<"(1)sum, (2)subtraction, (3)multiplication, (4)division"<<endl;
    cin>>opction;

    switch (opction) {
        case 1:
            cout << "the sum of them is: "<<number_1 + number_2<<endl;
            break;

        case 2:
            cout << "the sum of them is: "<<number_1 - number_2<<endl;
            break;
        case 3:
            cout << "the sum of them is: "<<number_1 * number_2<<endl;
            break;
        case 4:
            cout << "the sum of them is: "<<float(number_1) / number_2<<endl;
            break;
        default:
            cout<<"you didnt select anything... bye";
    }
    return 0;
}