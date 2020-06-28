#include <iostream>
#include <cmath>

int main() {
    double n = 1, m = 1, white;
    std::cin >> n >> m >> white;

    while (n && m) {
        double mi = std::min(n, m);
        double ma = std::max(n, m);

        double rest = 0;
        if (!white) {
            rest = ceil(mi - 8.0) / 2.0;
            ma--;
        }

        double x = (mi - 8) + 1;
        double y = (ma - 8) + 1;
        double result = ((x * y) / 2) + rest;

        long int finalResult = ceil(result);
        std::cout<< finalResult << "\n";

        std::cin >> n >> m >> white;
    }
}