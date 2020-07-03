#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using std::vector;

double calculateLength(vector <int> pointA, vector <int> pointB);

int main() {
    int n, k;
    std::cin >> n >> k;

    vector <vector<int>> coordinates(n, vector <int> (2));
    for (int i = 0; i < n; i++) {
        std::cin >> coordinates[i][0];
        std::cin >> coordinates[i][1];
    }

    double length = 0;
    for (int i = 0; i < n - 1; i++) {
        length += calculateLength(coordinates[i], coordinates[i+1]);
    }

    std::cout << std::setprecision(10) << (length / 50) * k << '\n';
}

double calculateLength(vector <int> pointA, vector <int> pointB) {
    int Xdiff = abs(pointA[0] - pointB[0]);
    int Ydiff = abs(pointA[1] - pointB[1]);

    return sqrt(pow(Xdiff, 2) + pow(Ydiff, 2));
}