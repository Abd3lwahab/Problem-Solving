#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;

    int arr[n * 2];
    bool uniqe = true;

    for (int i = 0; i < n * 2; i++) {
        std::cin >> arr[i];
        if (arr[i] == x || arr[i] == 7 - x)
            uniqe = false;
    }

    if (uniqe) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}