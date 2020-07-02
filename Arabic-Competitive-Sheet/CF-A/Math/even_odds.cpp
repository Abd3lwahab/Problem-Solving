#include <iostream>
#include <cmath>
 
int main() {
    long long n, k;
    sd::cin >> n >> k;
 
    long long h = ceil((float) n / 2.0);
 
    if (n % 2 != 0) 
        n++;
 
    if (k <= h)  {
        sd::cout << k + (k - 1) << sd::endl;
    } else {
        sd::cout << k - (n - k) << sd::endl;
    } 
}