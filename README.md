# Array Manipulation in C++

A simple C++ program demonstrating basic array operations including accessing elements, modifying values, and iterating through the array.

## Description

This program showcases how to work with arrays in C++. It demonstrates accessing the first and last elements, modifying an element, and iterating through the array to display all elements.

### Key Features
- Array declaration and initialization
- Element access by index
- Element modification
- Array iteration using a loop

## Code Structure

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    cout << "First Element: " << numbers[0] << endl;
    cout << "Last Element: " << numbers[4] << endl;
    
    numbers[2] = 10; // Modify the third element
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}
