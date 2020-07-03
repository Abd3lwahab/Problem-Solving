#include <iostream>
#include <vector>

struct coordinates{
    double x;
    double y;
};

int main () {
    double x1;
    while(std::cin >> x1) {
        std::vector <coordinates> current (1);
        current[0].x = x1;
        std::cin >> current[0].y;
        
        int commanIndex;
        double x, y;

        for (int i = 1; i < 4; i++) {
            coordinates tmp;
            std::cin >> tmp.x >> tmp.y;
            
            bool comman = false;
            for (int j = 0; j < i; j++) {
                if (tmp.x == current[j].x && tmp.y == current[j].y) {
                    x = tmp.x, y = tmp.y;
                    current.erase(current.begin() + j);
                    comman = true;
                    break;
                }
            }

            if (!comman)
                current.push_back(tmp);
        }

        coordinates middlePoint, endPoint;
        middlePoint.x = (current[0].x + current[1].x) / 2;
        middlePoint.y = (current[0].y + current[1].y) / 2;

        endPoint.x = (2 * middlePoint.x) - x;
        endPoint.y = (2 * middlePoint.y) - y;
        
        std::cout.setf(std::ios::fixed,std::ios::floatfield);
        std::cout.precision(3);
        std::cout << endPoint.x << " " << endPoint.y << '\n';
    }
}