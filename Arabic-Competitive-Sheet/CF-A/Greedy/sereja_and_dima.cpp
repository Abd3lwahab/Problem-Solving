#include <iostream>

int takeMax(int arr[], int &l , int &r) {
    if (arr[l] > arr[r]) {
        return arr[l++];
    } else {
        return arr[r--];
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        sereja += takeMax(arr, l, r);
        if (l <= r)
            dima += takeMax(arr, l, r);
    }

    std::cout << sereja << ' ' << dima << std::endl;
}