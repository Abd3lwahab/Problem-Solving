#include <iostream>

int main() {
    int  n;
    std::cin >> n;
    int N = n * 2;
    int arr[N];
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];

    int home[n]; 
    int away[n];
    for (int i = 0, j = 0; i < N; i += 2, j++) {
        home[j] = arr[i];
        away[j] = arr[i+1];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (home[i] == away[j])
                count++;
        }
    }
    
    std::cout << count <<std::endl;
}