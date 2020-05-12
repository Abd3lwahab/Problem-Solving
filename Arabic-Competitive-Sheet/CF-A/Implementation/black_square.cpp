#include <iostream>

int main() {
    int a1, a2, a3, a4;
    std::cin >> a1 >> a2 >> a3 >> a4;

    std::string s;
    std::cin >> s;

    int o = 0, t = 0, h = 0, f = 0;
    for (int i = 0, n = s.length(); i < n; i++) {
        if (s[i] == '1') o++;
        else if (s[i] == '2') t++;
        else if (s[i] == '3') h++;
        else f++;
    }

    int total = (o * a1) + (t * a2) + (h * a3) + (f * a4);
    std::cout << total <<std::endl;
}