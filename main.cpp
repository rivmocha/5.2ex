#include <iostream>
using namespace std;

int main()
{
	int Sum = 0;
	for (int i = 0; i <= 100; i = i++)
	{
		Sum = Sum + i;
	}

	cout << "1부터 100까지의 합은" << Sum << endl;

	return 0;
}
