#include <iostream>

int main() {
    int n, b, d;
    std::cin >> n >> b >> d;
    
    int arr[n];
    for (int i = 0; i < n; i++) 
        std::cin >> arr[i];

    int count = 0, juic = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= b) 
            juic += arr[i];
        if (juic > d) 
            count++, juic = 0;
    }

    std::cout << count <<std::endl;
}