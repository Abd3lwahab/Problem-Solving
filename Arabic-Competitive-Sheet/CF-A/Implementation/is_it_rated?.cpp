#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> arr[i][j];
        }
    }

    bool rated = false;
    bool unrated = false;

    int maxv = arr[0][0];

    for (int i = 0; i < n; i++) {
        if (arr[i][0] != arr[i][1]) {
            rated = true;
            break;
        }

        if (arr[i][0] > maxv) {
            unrated = true;
        }
        maxv = arr[i][0];
    }

    if (rated) {
        std::cout << "rated\n";
    } else if (unrated) {
        std::cout << "unrated\n";
    } else {
        std::cout << "maybe\n";
    }
}