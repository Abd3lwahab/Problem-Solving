#include <iostream>
#include <vector>
#include <string>

int main() {
    int n, k, count = 0;
    std::cin >> n >> k;

    while (n--) {
        std::string s;
        std::cin >> s;

        int len = s.size();
        std::vector<int> frq(len);

        int sum = 0;
        for (int i = 0; i < len; i++) {
            int x = (int)(s[i] - '0');
            if (frq[x] == 0) {
                frq[x]++;
                if (x <= k)
                    sum++;
            }
        }

        if (sum == k + 1)
            count++;
    }

    printf("%i\n", count);
}