#include <iostream>
#include <algorithm>
 
int main() {
    int n;
    std::cin >> n;
    int money[n];
    for (int i = 0; i < n; i++) {
        std::cin >> money[i] ;
    }

    std::sort(money, money + n);
 
    int sum = 0, sum1 = 0, sum2 = 0, coins = 0;
    for (int j = 0; j < n; j++) {
        sum = sum + money[j];
    }
 
    int i = n;
    while (sum1 <= sum2) {
        sum1 = sum1 + money[i-1];
        sum2 = sum - sum1;
        i--;
        coins++;
        if (i < 0)
            break;
    }
 
    std::cout << coins <<std::endl;
}