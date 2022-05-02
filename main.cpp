#include <iostream>
using namespace std;

int main()
{
	int Score = 0;
	cin >> Score;

	if (Score >= 90 && Score < 100)
	{
		cout << "A" << endl;
	}

	if (Score >= 80 && Score < 90)
	{
		cout << "B" << endl;
	}
	if (Score >= 70 && Score < 80)
	{
		cout << "C" << endl;
	}
	if (Score >= 60 && Score < 70)
	{
		cout << "D" << endl;
	}

	if (Score < 60)
	{
		cout << "F" << endl;
	}


	return 0;
}
