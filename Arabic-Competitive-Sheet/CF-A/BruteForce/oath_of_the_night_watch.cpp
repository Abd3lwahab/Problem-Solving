#include <iostream>
#include <algorithm>
 
int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + n);
    int minv = arr[0], maxv = arr[n-1], count = 0;
    for (int i = 1; i < n-1; i++) {
        if (arr[i] > minv && arr[i] < maxv)
            count++;
    }
    
    std::cout << count <<std::endl;
}