#include <iostream>
#include <cmath>

#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286;


int main() {
    double d, h, v, e;
    std::cin >> d >> h >> v >> e;

    double v0, v1, second;
    v0 = pow(d/2, 2) * h * PI;
    v1 = pow(d/2, 2) * e * PI;

    second = v0 / (v - v1);
    if (second > 0) {
        std::cout << "YES\n" << second << '\n';
    } else {
        std::cout << "NO\n";
    }
}