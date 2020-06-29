#include <iostream>
#include <set>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    
    std::set <char> frq;
    for (int i = 0; i < n; i++) {
        frq.insert(tolower(s[i]));
    }

    if (frq.size() == 26) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}