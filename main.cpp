#include <iostream>
using namespace std;

int main()
{
	char X = '*';

	for (int j = 1; j <= 5; j++)
	{
		for (int i = 0; i < j; i++)
		{
			cout << X;
		}

		cout << '\n';
	}
	return 0;
}
