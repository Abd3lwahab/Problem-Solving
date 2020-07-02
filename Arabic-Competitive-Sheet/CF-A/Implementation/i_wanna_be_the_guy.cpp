#include <iostream>
#include <vector>

int main() {
    int n, x, y;
    std::cin >> n;

    std::vector<int> frq(n);

    std::cin >> x;
    for (int i = 0; i < x; i++) {
        int tmpX;
        std::cin >> tmpX;
        frq[tmpX - 1]++;
    }

    std::cin >> y;
    for (int i = 0; i < y; i++) {
        int tmpY;
        std::cin >> tmpY;
        frq[tmpY - 1]++;
    }

    bool pass = true;
    for (int i = 0; i < n; i++) {
        if (frq[i] == 0) {
            pass = false; 
            break;
        }
    }

    if (pass) {
        std::cout << "I become the guy.\n";
    } else {
        std::cout << "Oh, my keyboard!\n";
    }
}