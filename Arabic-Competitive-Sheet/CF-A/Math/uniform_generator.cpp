#include <iostream>
#include <iomanip>

int gcd(int a, int b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 

int main() {
    int step, mod;
    while (std::cin >> step >> mod) {
        std::string result;
        if (gcd(step, mod) == 1) {
                result = "Good Choice";
        } else  {
            result = "Bad Choice";
        }

        std::cout << std::setw(10) << step << std::setw(10) << mod << "    " << result << "\n\n";
    }
}