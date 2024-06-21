//  Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers between them.

#include <iostream>
using namespace std;

void printOddNumber(int a, int b){
    for(int i = a; i <= b; i++) {
        if(i % 2 != 0) {
            cout << i << " ";
        }
    }
}

int main () {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Odd numbers between " << a << " and " << b << " are: " << endl;
    printOddNumber(a, b);
    return 0;
}