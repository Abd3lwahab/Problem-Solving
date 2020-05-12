#include <iostream>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    int ptr = 1;
    for (int i = 0, j = 0; i < t.length(); i++) {
        if (s[j] == t[i]) {
            ptr = j + 2;
            j++;
        }
    }
    std::cout << ptr <<std::endl;
}