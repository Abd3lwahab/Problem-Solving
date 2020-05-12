#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
        std::cin >> arr[i];;

    int count = 0, a = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != a)
            count++;
        a = arr[i];
    }
    std::cout << count << std::endl;
}