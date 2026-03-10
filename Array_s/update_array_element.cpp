/*
Problem: Update the last element of an array and print it
Platform: CodeChef Practice
Concept: Arrays
Language: C++
*/

#include <iostream>
using namespace std;

int main() {

    int even_numbers[4] = {0, 2, 4, 5};

    // Updating last element
    even_numbers[3] = 6;

    cout << even_numbers[3] << endl;

    return 0;
}
