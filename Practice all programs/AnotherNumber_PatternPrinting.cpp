#include <iostream>

int main() {
    int n = 4; // Number of rows for the pattern

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << i;
        }
        std::cout << "\n"; // Add a space after each row
    }

    return 0;
}

