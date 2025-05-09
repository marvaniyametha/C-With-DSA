// Develop a program that prints all alphabets from a to z by skipping 3 alphabets using a do-while loop.

#include <iostream>
using namespace std;

int main() {
    char letter = 'a'; 

    do {
        cout << letter << " "; 
        letter += 6; 
    } while (letter <= 'z');

}