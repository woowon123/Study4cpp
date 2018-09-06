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
//for문을 활용한 예시
void main()
{
	int i, j;
	/*
	for (i = 1; i < 6; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			cout << j+1 <<" ";
		}
		cout << endl;
	}
	cout << endl;
	*/
	/*
	for (i = 1; i < 6; ++i)
	{
		for (j = 6; j > i; --j)
		{
			cout << j - 1 << " ";
		}
		cout << endl;
	}*/
	/*
	for (i = 1; i < 6; ++i)
	{
		for (j = 5; j > 0; --j)
		{
			if (i<j)
			{
				cout <<"  ";
			}
			else
				cout << j << " ";

		}
		cout << endl;
	}*/
	for (i = 1; i < 6; ++i)
	{
		for (j = 5; j > 0; --j)
		{
			for (j = 5; j > 0; --j)
			{
				if (i<j)
				{
					cout << "  ";
				}
				else if (j == 1)
				{
					for (int k = j; k < 6; ++k)
					{
						if (i < k)
						{
							cout << "  ";
						}
						else
							cout << k << " ";
					}
				}
				else
					cout << j << " ";
				
			}

		}
		cout << endl;
	}
}