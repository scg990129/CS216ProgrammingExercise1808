#include <iostream>
#include "searchSortAlgorithms.h"
using namespace std;

int main() {
    // Declare a list of 10 integers
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    int input;
    for(int i=0; i<10; i++) {
        cin >> input;
        list[i] = input;
    }

    for(auto i: list) {
        cout << i << " ";
    }
    cout << endl;

    insertionSort(list, 10);
    for(auto i: list) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*
 * Instructions
Write a program to test the insertion sort algorithm for array-based lists as given in this chapter.

The program should:

Declare a list of 10 integers
Prompt the user to input 10 integers into the list
Output the list before sorting
Output the list after calling insertionSort
 */