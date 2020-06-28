// Implementation of multiplication algorithm

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::string x, y;
    while (std::cin >> x) {
        std::cin >> y;

        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());

        int xl = x.size(), yl = y.size();

        std::vector <int> result(xl + yl);

        int carry = 0;

        for (int i = 0; i < xl; i++) {
            for (int j = 0; j < yl; j++) {
                int z = (x[i] - (int)'0') * (y[j] - (int)'0');
                result[i+j] += z;
            }
        }

        for (int i = 0; i < result.size(); i++) {
            result[i] += carry;
            carry = result[i] / 10;
            result[i] %= 10;
        }

        reverse(result.begin(), result.end());

        if (result[0] == 0) 
            result.erase(result.begin());

        if (result[0] == 0) {
            std::cout << "0\n";
        } else {
            for (int i = 0; i < result.size(); i++)
                std::cout << result[i];
            std::cout << '\n';
        }
    }
}