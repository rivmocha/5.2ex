#include <iostream>
using namespace std;

int main()
{
	int Sum1 = 0;
	int Sum2 = 0;
	
	for (int i = 1; i <= 100; i = i++)
	{
		if (i % 2 == 1)
		Sum1 += i;
		
		else
		Sum2 += i;
		
	}

	cout << "1���� 100���� �� Ȧ���� ����" << Sum1 << endl;
	cout << "1���� 100���� �� ¦���� ����" << Sum2 << endl;
	return 0;
}
