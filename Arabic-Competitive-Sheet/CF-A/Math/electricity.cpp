#include <iostream>
#include <vector>

using std::vector;

vector<int> findConsumption(vector <vector <int>> Note);
vector<int> findNextDay(vector <int> dayNote);
bool isLeapYear(int year);

int main() {
    int n;
    std::cin >> n;

    while (n) {
        vector <vector <int>> Note(n, vector <int> (4));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                std::cin >> Note[i][j];
            }
        }

        vector <int> result = findConsumption(Note);
        std::cout << result[0] << " " << result[1] << '\n';

        std::cin >> n;
    }
}

vector<int> findConsumption(vector <vector <int>> Note) {
    vector <int> result (2);
    vector <int> nextDay = findNextDay(Note[0]);
    
    for (int i = 1; i < Note.size(); i++) {
        bool thisIsTheNextDay = true;
        for (int j = 0; j < 3; j++) {
            if (Note[i][j] != nextDay[j]) {
                thisIsTheNextDay = false;
                break;
            }
        }

        if (thisIsTheNextDay) {
            result[0]++;
            result[1] += (Note[i][3] - Note[i-1][3]);
        }

        nextDay = findNextDay(Note[i]);
    }

    return result;
}

vector<int> findNextDay(vector <int> dayNote) {
    dayNote.pop_back();

    int day = dayNote[0];
    int month = dayNote[1];
    int year = dayNote[2];
    
    bool isLeap = isLeapYear(year);
    
    if (day == 30) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            day++;
        else {
            day = 1;
            month++;
        }
    }
    else if (month == 2 && day >= 28) {
        if (isLeap && day == 28) 
            day++;
        else if (day == 29 || ((day == 28) && !isLeap)){
            day = 1;
            month = 3;
        }
    } 
    else if (day == 31) {
        if (month == 12) {
            day = 1;
            month = 1;
            year++;
        }
        else {
            day = 1;
            month++;
        }
    }
    else {
        day++;
    }

    vector <int> nextDay (3);
    nextDay = {day, month, year};

    return nextDay;
}

bool isLeapYear(int year) {
    if (year % 400 == 0 || year % 4 == 0)  
        return true;  

    if (year % 100 == 0)  
        return false;  

    return false;
}