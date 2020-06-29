#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int max = n;

    // Assign frequancy vector to and all element in vector equal to 0
    std::vector <int> frq(n+1); 

    // Iterate over all element from n to 1
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;

        // Increament the apperance number of entered number
        frq[x]++;

        // Check if the current snack is the biggest one
        if (x == max) {
            std::cout << max << " ";
            max--;
            int j = i;
            // Check the target number is enterd or not
            if (frq[max] == 1) {
                // Print all numbers was in waiting list which less than max
                while (j--) {
                    if (frq[max] == 1) {
                        std::cout << max<< " ";
                        max--;
                    }
                }
            }
            std::cout <<std::endl;
        } else {
            std::cout <<std::endl;
        }
    }
}