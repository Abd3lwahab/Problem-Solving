#include <iostream>
#include <vector>

typedef long long int ll; 
using std::vector;  

// Calculate GCD for two intgers
int gcd(int a, int b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 

// Calculate LCM for array of intgers
ll findlcm(vector <int> arr) { 
    ll ans = arr[0]; 
  
    for (int i = 1; i < arr.size(); i++) 
        ans = (((arr[i] * ans)) / (gcd(arr[i], ans))); 
  
    return ans; 
} 

// Apply Inclusion Exclusion Principle
int inclu_exclu(int arr[], int n) {
    int res = 0;

    vector <int> low;

    for (int i1 = 0; i1 < 2; ++i1) {
        for (int i2 = 0; i2 < 2; ++i2) {
            for (int i3 = 0; i3 < 2; ++i3) {
                for (int i4 = 0; i4 < 2; ++i4) {
                    for (int i5 = 0; i5 < 2; ++i5) {
                        low.clear();
                        int element = 0;

                        if (i1) low.push_back(arr[0]), ++element;
                        if (i2) low.push_back(arr[1]), ++element;
                        if (i3) low.push_back(arr[2]), ++element;
                        if (i4) low.push_back(arr[3]), ++element;
                        if (i5) low.push_back(arr[4]), ++element;

                        if (element == 0) continue;

                        int sign = element % 2 == 1 ? 1 : -1;

                        res += sign * n / findlcm(low);
                    }
                }
            }
        }
    }

    return res;
}

int main(){
    int t;
    std::cin >> t;

    while(t--) {
        int n, m, a, d;
        std::cin >> n >> m >> a >> d;
        int arr[5];

        for (int i = 0; i < 5; i++)
            arr[i] = a + i * d;

        std::cout << m - n + 1 - (inclu_exclu(arr, m)  - inclu_exclu(arr, n - 1)) << '\n';
    }
}