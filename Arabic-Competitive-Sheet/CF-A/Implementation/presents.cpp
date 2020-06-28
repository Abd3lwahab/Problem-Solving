#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n], arrN[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int index, value;
    for (int i = 0; i < n; i++) {
        index = arr[i] - 1;
        value = i + 1;
        arrN[index] = value;
    }

    for (int i = 0; i < n; i++) {
        std::cout << arrN[i]<< " ";
    }
    std::cout <<std::endl;
}