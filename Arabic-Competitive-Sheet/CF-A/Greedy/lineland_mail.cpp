#include <iostream> 
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int minv, maxv;
    for (int i = 0; i < n; i++) {   
        if (i == 0) {
            minv = abs(-arr[i]+arr[i+1]);
        } else if (i == n - 1) {
            minv = abs(-arr[i]+arr[i-1]);
        } else {
            minv = std::min(abs(-arr[i]+arr[i+1]),abs(-arr[i]+arr[i-1]));
        }
        
        maxv = std::max(abs(-arr[i] + arr[n-1]), abs(-arr[i] + arr[0]));
        
        std::cout << minv << " " << maxv << "\n";
    }
}