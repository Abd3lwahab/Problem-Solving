#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    int pl = 0, crime = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1) {
            pl += arr[i];
        } else {
            if (pl == 0) {
                crime++;
            } else {
                pl += arr[i];
            }
        }
    }

    std::cout << crime << std::endl;
}