#include <iostream>

bool unLocked(int arr[]);

int main() {
    int arr[6];
    for (int i = 0; i < 6; i++) {
        std::cin >> arr[i];
    }

    int x = (arr[2] + arr[4] - arr[1]) / 2;

    int sol[4] = {x, arr[0] - x, arr[2] - x, arr[1] - arr[2] + x};

    if (unLocked(sol)) {
        for (int i = 0; i <= 2; i += 2) {
            std::cout << sol[i] << " " << sol[i + 1] <<std::endl;
        }
    } else {
        std::cout << "-1" << std::endl;
    }
}

bool unLocked(int arr[]) {
    for (int i = 0; i < 4; i++) {
        if (arr[i] > 9 || arr[i] < 1)
            return false;

        for (int j = i + 1; j < 4; j++) {
            if (arr[j] == arr[i])
                return false;
        }
    }
    return true;
}
