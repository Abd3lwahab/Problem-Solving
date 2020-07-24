#include <iostream>

int main() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int lessTime = __INT_MAX__;
    bool found = false;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') {
            found = true;
            int time = (arr[i + 1] - arr[i]) / 2;
            if (time < lessTime)
                lessTime = time;
        }
    }

    if (found) {
        std::cout << lessTime << std::endl;
    } else {
       std::cout << -1 << std::endl;
    }
}