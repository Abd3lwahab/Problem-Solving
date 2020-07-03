#include <iostream>
#include <vector>

using std::vector;

vector <vector <double>> figures;

vector <int> findFigureContained(double x, double y);
bool pointInFigure(double x, double y, vector<double> figure);

int main() {
    char input;
    std::cin >> input;

    while(input == 'r' && input != '*') {
        vector <double> currentFigure (4);
        for (int i = 0; i < 4; i++ ) {
            std::cin >> currentFigure[i];
        }
        
        figures.push_back(currentFigure);
        std::cin >> input;
    }

    int pointIndex = 0;
    while (true) {
        double x, y;
        std::cin >> x >> y;

        if (x == 9999.9 && y == 9999.9) 
            break;
        pointIndex++;
        
        vector <int> figureIndex = findFigureContained(x, y);
        if (figureIndex.size() == 0)
            std::cout << "Point " << pointIndex << " is not contained in any figure\n";

        for (int i = 0; i < figureIndex.size(); i++) {
            std::cout << "Point "<< pointIndex << " is contained in figure " << figureIndex[i] << '\n';
        }
    }
}

vector <int> findFigureContained(double x, double y) {
    vector <int> figureIndex;
    for (int i = 0; i < figures.size(); i++) {
        if (pointInFigure(x, y, figures[i]))
            figureIndex.push_back(i+1);
    }

    return figureIndex;
}

bool pointInFigure(double x, double y, vector <double> figure) {
    return (x > figure[0] && x < figure[2] && y > figure[3] && y < figure[1]);
}