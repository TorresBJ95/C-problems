//
// Created by bjtor on 21/4/2023.
//
#include <iostream>
using namespace std;
/* a) Encode

1 - Declare the integer variables a and b assign 10 to a and 20 to b
2 - Declare p and q as pointers to int
3 - Assign to p the address of a
4 - Emit the value of a and its address
5 - Emit the address contained in p, the value contained in the address contained in p, and the address of p
6 - Assign to q the address of a
7 - Emit the address contained in q, the value contained in the address contained in q and the address of q
8 - Add 1 to the variable a using the pointer p
9- Assign to q the address of b
10- Assign to the address stored in p the content of the address stored in q
11-Emit the address contained in p, the value contained in the address contained in p, and the address of p
12- Assign to p the address stored in q
13-Emit the address contained in p, the value contained in the address contained in p, and the address of p */

int main(){
    int a = 10;
    int b = 20;
    int *p;
    int *q;
    p = &a;
    cout << "Value of a is: " << a << endl;
    cout << "Adress of a is: "<< &a << endl;
    cout << "Adress of p is: "<< p << endl;
    cout << "Value of p is: "<< *p << endl;
    q = &a;
    cout << "Adress of q is: "<< q << endl;
    cout << "Value of q is: "<< *q << endl;
    *p += 1;
    cout << "revalue of p : "<< *p <<endl;
    cout <<  "revalue of a : "<< a <<endl;
    q = &b;
    *p = *q;
    cout << "Adress of p is: "<< &p << endl;
    cout << "Value of p is: "<< *p << endl;
    cout << "Adress of p is: "<< p << endl;
    p = q;
    cout << "Adress of p is: "<< &p << endl;
    cout << "Value of p is: "<< *p << endl;
    cout << "Adress of p is: "<< p << endl;
    cout << "Adress of B is: "<< &b << endl;




    return 0;
}