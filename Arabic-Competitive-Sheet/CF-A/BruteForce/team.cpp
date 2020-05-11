#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    while (n--) {
        int arr[3];
        for (int i = 0; i < 3; i++)
            std::cin >> arr[i];

        int sum = 0;
        for (int i = 0; i < 3; i++)
            sum += arr[i];

        if (sum >= 2)
            count++;
    }
    std::cout << count << std::endl;
}