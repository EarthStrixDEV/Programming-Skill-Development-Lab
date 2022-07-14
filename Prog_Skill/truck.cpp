#include <iostream>
using namespace std;

int main()
{
    int size, arr[0],n, w, temp = 0, truckCount[2] = {0,0} ,tc_size = -1;
    while (n != 0 && w != 0)
    {
        cin >> n;
        cin >> w;
        size = n;
        arr[size];
        tc_size++;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; //input the array
        }
        for (int i = 0; i < n; i++)
        {
            if (temp < arr[i])
            {
                temp = w;
                truckCount[tc_size]++;
            }
            temp -= arr[i];
        }
    }
    cout << truckCount[0] << "\n" << truckCount[1];

    return 0;
}