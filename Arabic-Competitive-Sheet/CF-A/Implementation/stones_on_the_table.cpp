#include <iostream>
    
int main() {
    int n;
    std::cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] == arr[i+1])
            count++;
    }
    std::cout << count << std::endl;
}