#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector <int> one, two, three;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            one.push_back(i+1);
        } else if (arr[i] == 2) {
            two.push_back(i+1);
        } else {
            three.push_back(i+1);
        }
    }

    int teams = std::min(one.size(), std::min(two.size(), three.size()));
    std::cout << teams <<std::endl;
    
    for (int i = 0; i < teams; i++) {
        std::cout << one[i] << " " << two[i] << " " << three[i] << "\n";
    }
}