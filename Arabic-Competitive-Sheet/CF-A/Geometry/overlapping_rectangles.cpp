#include <iostream>
#include <vector>
#include <cmath>

using std::vector;

bool isOverlap(vector <vector <int>> figures);
vector <int> findCoordinates(vector <vector <int>> figures);

int main() {
    int testCases;
    std::cin >> testCases;

    while (testCases--) {
        vector <vector <int>> figures (2, vector <int> (4));
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 4; j++) {
                std::cin >> figures[i][j];
            }
        }

        if (!isOverlap(figures))
            std::cout << "No Overlap\n\n";
        else {
            vector <int> coordinates = findCoordinates(figures);
            for (int i = 0; i < 4; i++) {
                if (i != 3)
                    std::cout << coordinates[i] << " ";
                else
                    std::cout << coordinates[i];
            }

            if (testCases != 0)
                std::cout << "\n\n";
            else
                std::cout << "\n";
        }
    }
}

bool isOverlap( vector <vector <int>> figures) {
    if (figures[1][0] >= figures[0][2] || figures[0][0] >=  figures[1][2])
        return false;
    
    if (figures[1][1] >= figures[0][3] || figures[0][1] >= figures[1][3])
        return false;

    return true;
}

vector <int> findCoordinates(vector <vector <int>> figures) {
    vector <int> intersection (4);
    intersection[0] = std::max(figures[0][0], figures[1][0]);
    intersection[1] = std::max(figures[0][1], figures[1][1]);
    intersection[2] = std::min(figures[0][2], figures[1][2]);
    intersection[3] = std::min(figures[0][3], figures[1][3]);

    return intersection;
}