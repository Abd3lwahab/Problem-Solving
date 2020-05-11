#include <iostream>
#include <algorithm>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int x = s1.compare(s2);
    if (x == 0)
        std::cout << "0\n";
    else if (x > 0)
        std::cout << "1\n";
    else
        std::cout << "-1\n";
}