//Write a function that accepts a pointer to a C-string as an argument and returns the number of words contained in the string. 
// displays the average number of letters in each word//


#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;
//stucture to hold string stats
struct StringStats {
    int wordCount;
    int letterCount;
};

//core function to count words and total white space char
//word is defined as any sequence of non white space char

StringStats getStats(const char* str) {
    StringStats stats={};
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = static_cast<unsigned char>(str[i]);
        //check if character is not a whitespace character
        if (!isspace(c)) {
        stats.letterCount++;
            if (!inWord) {
                stats.wordCount++;
                inWord = true;
            }

        }
        else {
            inWord = false;
        }
    }
    return stats;
}
StringStats getStats(const string& str) {
    return getStats(str.c_str());
}
int countWords(const char* str) {
    return getStats(str).wordCount;
}
int main() {
    string inputSentence;

    cout<<"Please enter a sentence: ";
    getline(cin, inputSentence);

    StringStats stats = getStats(inputSentence);

    //calculate average
    double average = 0.0;
    if (stats.wordCount > 0) {
        average = static_cast<double>(stats.letterCount) / stats.wordCount;
    }
    cout << "Total Words: " << stats.wordCount << "\n";
    cout << "Total Letters (non-whitespace characters): " << stats.letterCount << "\n";
    cout << fixed << setprecision(4);
    cout << "Average Letters per Word: " << average << "\n";

    return 0;
