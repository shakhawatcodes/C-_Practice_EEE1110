#include <iostream>
using namespace std;

int main() {
    char alphabet;

    cout << "Enter your Alphabet: ";
    cin >> alphabet;

    int ascii = (int)alphabet;

    if (ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85) {
        cout << "You Entered a vowel";
    }
    else {
        cout << "You have entered a consonant";
    }

    return 0;
}