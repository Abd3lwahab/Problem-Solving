#include <iostream>

int main()
{
    int n, d;
    std::cin >> n >> d;
    char arr[n], c;

    // Add distinct char
    for (int i = 0; i < d; i++) {
        c = (char) (97 + i);
        arr[i] = c;
    }

    // Start repeat char
    for (int i = d, j = 0; i < n; i++, j++) {
        arr[i] = arr[j];
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
    }
    std::cout <<std::endl;
}