// Tony Gaddis - Starting Out with C++
// Chapter 10 - Characters, C-Strings
// String Length Function
// Counts characters in a C-string using pointer arithmetic

#include <iostream>
#include <cctype>

using namespace std;

int stringLength(const char* str){
    int count = 0;
    //move forward pointer until null terminator
    while (*str != '\0'){
        if(!isspace(*str))//only count if it is NOT whitespace
            count++;
        str++;//move pointer to next char
    }
    return count;
}

int main(){
    const int SIZE = 100;
    char userString[SIZE];
    
    //get input
    
    cout<< "Please enter a string: ";
    cin.getline(userString, SIZE);
    
    //call function to display result
    int length = stringLength(userString);
    cout << "The length of the string is: " << length << endl;
    
    return 0;
    
}
