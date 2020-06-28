#include <iostream>
#include <cmath>

int main() {
    long long n = 1;
    while (n) {
        std::cin >> n;
        if (!n) break;

        double sq1 = sqrt(n);
        long long sq2 = sqrt(n);
        if (sq1 == sq2) {
            std::cout << "yes\n";
        } else {
            std::cout << "no\n";
        }
    }
}