//Write a program that uses a structure named MovieData to store the following information about a movie:
//Title
//Director
//Year Released
//Running Time (in minutes)
//The program should create two MovieData variables, store values in their members, and pass each one, in turn,
//to a function that displays the information about the movie in a clearly formatted manner.//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTimeMinutes;
};

//display data
void displayMovieInfo(const MovieData &movie) {
    const int LABEL_WIDTH = 20;

    cout << "\n----------------------------------------" << endl;
    cout << setw(LABEL_WIDTH) << left << "Title:" << movie.title << endl;
    cout << setw(LABEL_WIDTH) << left << "Director:" << movie.director << endl;
    cout << setw(LABEL_WIDTH) << left << "Year Released:" << movie.yearReleased << endl;
    cout << setw(LABEL_WIDTH) << left << "Running Time:" << movie.runningTimeMinutes << " minutes" << endl;
    cout << "----------------------------------------" << endl;
}
int main() {
    //create movie data structure variables
     MovieData movie1 ={
         "Dune: Part Two",
        "Denis Villeneuve",
        2024,
        166
    
     };
    //initalized using member wise assignment
    MovieData movie2;
    movie2.title = "Oppenheimer";
    movie2.director = "Christopher Nolan";
    movie2.yearReleased = 2023;
    movie2.runningTimeMinutes = 180;

    cout << "--- Movie Data Program ---" << endl;
    cout << "Displaying two pre-defined movie records.\n" << endl;

    
    cout << "Record 1:" << endl;
    displayMovieInfo(movie1);

    cout << "\nRecord 2:" << endl;
    displayMovieInfo(movie2);

    return 0;
}
