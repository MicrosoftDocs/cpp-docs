// Compile with: cl /EHsc /std:c++17

#include <iostream>
#include <memory>

int main() {
    // Create a unique_ptr to an array of 5 integers.
    // The elements are value-initialized to 0.
    auto p = std::make_unique<int[]>(5);

    // Assign values to the array elements.
    for (int i = 0; i < 5; ++i) {
        p[i] = i;
        std::cout << p[i] << "\n";
    }
    // The array is automatically deleted when p goes out of scope.
}