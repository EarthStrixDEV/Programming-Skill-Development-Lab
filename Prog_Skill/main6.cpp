#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int current, tax[3], total, zero;

	while (current != 0 && current <= 50000000)
	{

		cin >> current;
		if (current <= 100000)
		{
			zero = 0;
		}
		if (current >= 100001)
		{
			tax[0] = (abs(100001 - 1000000) * 6 / 100) + 1;
		}
		if (current >= 5000000)
		{
			tax[1] = (abs(1000001 - 5000000) * 12 / 100) + 1;
		}
		if (current <= 10000000 && current >= 5000001)
		{
			tax[2] = (abs(5000001 - current) * 20 / 100) + 1;
		}
	}

	total = tax[0] + tax[1] + tax[2];
	cout << zero << "\n"
		 << total;

	return 0;
}
