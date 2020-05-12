#include <iostream>
using namespace std;

void read(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int index(int arr[], int n, int x)
{
    int index = -1; 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
        }
    }
    return index;
}
void deleteEL(int arr[], int &n, int &index)
{
    n = n - 1;
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    read(arr, n);
    int se = 0, di = 0, maxv, del;
    while(n)
    {
        maxv = max(arr[0], arr[n-1]);
        se += maxv;
        del = index(arr, n, maxv);
        deleteEL(arr, n, del);
        if (n == 0)
            break;
        maxv = max(arr[0], arr[n-1]);
        di += maxv;
        del = index(arr, n, maxv);
        deleteEL(arr, n, del);
    }
    cout << se <<" "<< di <<endl;
    return 0;
}