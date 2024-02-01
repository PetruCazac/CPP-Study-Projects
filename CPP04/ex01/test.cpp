#include <iostream>
#include <string>

const int ARRAY_SIZE = 10; // Adjust the size as needed

int main() {
    // Original std::string array
    std::string arr1[ARRAY_SIZE] = { "Hello", "World", "C++", /* ... */ };

    // Creating a deep copy of the std::string array
    std::string arr2[ARRAY_SIZE];

    // Assigning values from arr1 to arr2
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        arr2[i] = arr1[i];
    }

    // Outputting content of both string arrays
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << " Original Strings Content=" << arr1[i] << std::endl;
        std::cout << " Copied   Strings Content=" << arr2[i] << std::endl;
        std::cout << " Original Strings Address=" << arr1 + i << std::endl;
        std::cout << " Copied   Strings Address=" << arr2 + i << std::endl;
    }

    return 0;
}