// Q5 - Given two numbers a and b, write a program to print all the prime numbers present between a and b?

#include <iostream>
using namespace std;

void printPrime(int a, int b){
    for(int i = a; i <= b; i++){
        int flag =0;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            cout << i << " ";
        }
    }
}

int main () {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Prime numbers between " << a << " and " << b << " are: " << endl;
    printPrime(a, b);
    return 0;
}