#include <iostream>
using namespace std;

//오버플로우 범위를 알아보자
/*
void main()
{
	bool a = true;
	int n = 0;
	while (a)
	{
		n += 1;
		if (n < 0)
		{
			a = false;
			cout << n << endl;
		}
	}
}
*/

void main()
{
	int num;
	int k;
	cin >> num;
	for (int i = 2; i < num+1; ++i)
	{
		for (k = 2; k < i; ++k)
			if (i%k== 0) break;
		if (k == i)
		{
			cout << i << "\t";
		}
	}
}