#include <iostream>
    
int main() {
    int limak, bob, count = 0;
    std::cin >> limak >> bob;

    while (bob >= limak) {
        limak *= 3;
        bob *= 2;
        count++;
    }
    std::cout << count << std::endl;
}