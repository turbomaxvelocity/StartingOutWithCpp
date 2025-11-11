//Write a function that accepts a pointer to a C-string as an argument and displays its contents backward. 
//For instance, if the string argument is "Gravity" the function should display "ytivarG". 
//Demonstrate the function in a program that asks the user to input a string then passes it to the function.

#include <iostream>
#include <cctype> 

using namespace std;

void displayStringBackward(const char* str) {
    //check if pointer is valid
    if (str == nullptr) {
        cerr << "null string" << endl;
        return;
    }
    //determine length
    //size t is an unsined int type that
    size_t length = strlen(str);
    cout << "Reversed string: ";
    //loop backwards
    for (long long i = (long long)length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    const int SIZE = 100;
    char inputString[SIZE];
    cout<<"Enter a string: ";
    cin.getline(inputString, SIZE);
    displayStringBackward(inputString);
    return 0;
}
