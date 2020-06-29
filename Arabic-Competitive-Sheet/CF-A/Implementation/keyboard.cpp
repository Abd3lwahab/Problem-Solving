#include <iostream>
#include <string> 

int main() {
    char shift;
    std::string s;
    std::cin >> shift >> s;
    std::string keyboard = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    int w = 0;
    shift == 'R'? w = -1 : w = 1;

    int idx;
    for (int i = 0; i < s.size(); i++) {
        idx = keyboard.find(s[i]);
        s[i] = keyboard[idx + w];
    }

    std::cout << s <<std::endl;
}