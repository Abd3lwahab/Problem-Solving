#include <iostream>
#include <vector>

using std::vector;
using std::string;

int countAlive(vector <string> &grid);
void findRest(int x, int y, vector <string> &grid);

int main(){
    int t;
    std::cin >> t;
    int testCases = 1;
    while(t--) {
        int n, N;
        std::cin >> n;

        N = n + 2;
        vector <string> grid;

        // Create padding over grid border with value .
        string padding = string(N, '.'), tmp;
        grid.push_back(padding);
        
        for (int i = 0; i < n; i++){
            std::cin >> tmp;
            tmp.insert(tmp.begin(), '.');
            tmp.push_back('.');
            grid.push_back(tmp);
        }
        grid.push_back(padding);

        std::cout << "Case " << testCases << ": " << countAlive(grid) <<'\n';
        testCases++;
    }
}

int countAlive(vector <string> &grid) {
    int aliveShips = 0;
    for (int i = 1; i < grid.size() - 1; i++) {
        for (int j = 1; j < grid[i].size() - 1; j++) {
            if (grid[i][j] == 'x') {
                aliveShips++;
                grid[i][j] = '.';
                findRest(i, j, grid);
            }
        }
    }
    return aliveShips;
}

void findRest(int x, int y, vector <string> &grid) {
    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {
            if (i != x && j != y)
                continue;
            if (grid[i][j] == 'x' || grid[i][j] == '@'){
                grid[i][j] = '.';
                findRest(i, j, grid);
            }
        }
    }
}