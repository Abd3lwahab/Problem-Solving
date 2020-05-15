#include <iostream>

int main() {
    long long n, ice;
    std::cin >> n >> ice;
    long long record, distress = 0;
    while (n--) {
        char opp;
        std::cin >> opp >> record;
        if (opp == '+') {
            ice += record;
        } else {
            if (record <= ice) 
                ice -= record;
            else 
                distress++;
        }
    }
    std::cout << ice << " " << distress << std::endl;
}