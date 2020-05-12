#include <iostream>

int main() {
    int y, w;
    std::cin >> y >> w;

    int x = 6 - std::max(y, w) + 1, t = 6;
    if (x == 6)
        x = 1, t = 1;
    else if (x % 2 == 0)
        x /= 2, t = 3;
    else if (x % 3 == 0)
        x /= 3, t = 2;

    std::cout << x << "/" << t << std::endl;
}