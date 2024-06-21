// Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.

#include <iostream>
using namespace std;

void eligibleToVote(int age){
    if(age >= 18){
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }
}

int main() {
    int age;
    cout << "Enter the your age: ";
    cin >> age;
    eligibleToVote(age);
    
    return 0;
}