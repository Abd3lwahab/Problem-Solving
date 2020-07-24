#include <iostream>
#include <string>

int main() {
    std::string on, wait, left, right;
    std::cin >> on >> wait;
    int delmit, off = wait.size();

    delmit = on.find('|');

    left = on.substr(0, delmit);
    right = on.substr(delmit + 1, on.size());

    for (int i = 0; i < wait.size(); i++) {
        if (left.size() < right.size()) {
            left.push_back(wait[i]);
        } else {
            right.push_back(wait[i]);
        }
    }

    if (left.size() == right.size()) {
        std::cout << left << '|' << right << '\n';
    } else {
        std::cout << "Impossible\n";
    }
}