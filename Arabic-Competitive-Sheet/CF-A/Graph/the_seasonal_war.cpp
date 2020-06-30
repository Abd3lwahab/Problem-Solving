#include <iostream>
#include <vector>

using std::vector;
using std::string;

int countWarEagle(vector <string> &photo, int n);
void isEagle(int x, int y, vector <string> &photo);

int main() {
    int size, testCase = 1;
    while (std::cin >> size) {
        int n = size + 2;
        vector <string> photo;
        
        // Create padding over image border with value 0
        string padding, tmp;
        padding = string(n, '0');
        photo.push_back(padding);
        for (int i = 0; i < size; i++) {
            std::cin >> tmp;
            tmp.insert(tmp.begin(), '0');
            tmp.push_back('0');
            photo.push_back(tmp);
        }
        photo.push_back(padding);

        std::cout<< "Image number "<< testCase<< " contains "<< countWarEagle(photo, n)<< " war eagles.\n";
        testCase++;
    }
}

int countWarEagle(vector <string> &photo, int n) {
    int eagleCount = 0;

    // Iterate over all image pixel values until find pixel with value 1
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (photo[i][j] == '1') {
                photo[i][j] = '0';
                eagleCount++;
                isEagle(i, j, photo);
            }
        }
    }
    return eagleCount;
}

// Recursion over all pixels with value 1 around current pixel
void isEagle(int x, int y, vector <string> &photo) {
    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {
            if (photo[i][j] == '1') {
                photo[i][j] = '0';
                isEagle(i, j, photo);
            }
        }
    }
}