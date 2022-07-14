#include <iostream>
using namespace std;

int main() {
    //domino solution
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] > max) {
                max = a[i] + a[j];
            }
        }
    }
    cout << max << endl;

    return 0;
}