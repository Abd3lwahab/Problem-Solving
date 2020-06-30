#include <iostream>
#include <vector>
#include <map>

using std::vector;
using std::string;

vector <string> getPath(vector <string> shape);
vector <string> findDirection(int x, int y, vector <string> shape);
bool checkIEHOVA(char next, char current);

std::map <char, char> nextChar = {{'@', 'I'}, {'I', 'E'}, {'E', 'H'}, {'H', 'O'},
                             {'O', 'V'}, {'V', 'A',}, {'A', '#'}};
int main()
{
    int t;
    std::cin >> t;

    while (t--) {
        int m, n;
        std::cin >> m >> n;
        vector <string> shape;

        // Create padding over shape border with value X
        string tmp, padding = string(n+2, 'X');
        shape.push_back(padding);

        for (int i = 0; i < m; i++) {
            std::cin >> tmp;
            tmp.insert(tmp.begin(), 'X');
            tmp.push_back('X');
            shape.push_back(tmp);
        }

        vector <string> path = getPath(shape);

        for (int i = 0; i < path.size(); i++) {
            if (i != path.size()-1)
                std::cout << path[i] << " ";
            else
                std::cout << path[i];
        }
        std::cout << '\n';
    }
}

vector <string> getPath(vector <string> shape) {
    // Iterate over first row for beginning symbol
    for (int i = 1; i < shape[0].size() - 1; i++){
        if (shape[shape.size() - 1][i] == '@') {
            return findDirection(i, shape.size() - 1, shape);
        } 
    }
}

vector <string> findDirection(int x, int y, vector <string> shape) {
    // Assign the solution and clear it every new shape
    static vector <string> path;
    if (shape[y][x] == '@') {
        path.clear();
    }

    char current = shape[y][x];
    char front = shape[y-1][x];
    char right = shape[y][x+1];
    char left = shape[y][x-1];
    
    if (checkIEHOVA(front, current)) {
        path.push_back("front");
        findDirection(x, y-1, shape);
    }
    else if (checkIEHOVA(right, current)) {
        path.push_back("right");
        findDirection(x+1, y, shape);
    }
    else if (checkIEHOVA(left, current)) {
        path.push_back("left");
        findDirection(x-1, y, shape);
    }

    return path;
}

// Check if the next postion is the wanted one
bool checkIEHOVA(char next, char current) {
    if (nextChar[current] == next) {
            return true;            
    }
    return false;
}