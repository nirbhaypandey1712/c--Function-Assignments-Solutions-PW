//Q1 - Write a function to print squares of the first 5 natural numbers?

#include <iostream>
using namespace std;

void printSquares() {
    for (int i = 1; i <= 5; i++) {
        cout << "Square of " << i << " is " << i * i << endl;
    }
}

int main() {
    printSquares();
    return 0;
}
