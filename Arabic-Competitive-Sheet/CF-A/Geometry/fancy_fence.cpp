#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int a;
        std::cin >> a;

        if (360 % (180 - a) == 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}