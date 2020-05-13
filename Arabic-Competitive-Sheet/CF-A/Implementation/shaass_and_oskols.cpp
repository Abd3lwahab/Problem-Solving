#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin>>arr[i];
    
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y, up, down;
        std::cin >> x >> y;
        up = y - 1;
        down = arr[x-1] - up - 1;
        arr[x-1] = 0;
        if (x-1 != 0)
            arr[x-2] += up;
        if (x != n)
            arr[x] += down;
    }
    
    for (int i = 0; i < n; i++)
        std::cout << arr[i] <<std::endl;
}