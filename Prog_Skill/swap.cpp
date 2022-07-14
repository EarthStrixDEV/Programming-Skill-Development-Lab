#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int X, dec, i, j, swap;
    int bin[10];
    cin >> X;

    if (1 <= X <= 255)
    {
        dec = X;
        do
        {
            bin[i] = dec % 2;
            dec = dec / 2;
            i++;
        } while (dec > 0);

        for (j = i - 1; j >= 0; j--)
        {
            swap = ((X & 0b10101010) >> 1) | ((X & 0b01010101) << 1);
            bin[j] = swap;
        }
        cout << swap;
    }
}