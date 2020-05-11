#include <iostream>

int main() {
    int n , h;
    std::cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int width = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > h) {
            width += 2;
        } else {
            width++;
        }
    }
    std::cout << width <<std::endl;
}