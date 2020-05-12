#include <iostream>
#include <cmath>

int main() {
    std::string s;
    std::cin >> s;

    int sum = 0, x, y;
    int ptr = (int) 'a';
    for (int i = 0; i < s.size(); i++){
        x = (int) s[i];
        y = abs(ptr - x);
        if (y > 13)
            y = 26 - y;
        sum = sum + y;
        ptr = (int) s[i];
    }
    std::cout << sum <<std::endl;
}