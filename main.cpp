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

	cout << "1부터 100까지 중 홀수의 합은" << Sum1 << endl;
	cout << "1부터 100까지 중 짝수의 합은" << Sum2 << endl;
	return 0;
}
