#include <iostream>
#include <string>
#include <set>
using namespace std;
void searchNumer(int a);


int main()
{
	int number;
	cin >> number;
	if (number <= 1000)
		searchNumer(number);
	else
		cout << "1000 ���� ���ڸ� �Է� �����մϴ�" << endl;
}

void searchNumer(int a)
{
	int count = 0;


	if (a < 100)
	{
		count = a;
	}

	if (a > 100 && a<=1000)
	{
		int first;
		int second;
		int third;
		count = 99;
		for (int i = 100; i <= a; ++i)
		{
			first = i / 100;
			second = (i % 100) / 10;
			third = (i % 100) % 10;
			if (first - second == second - third)
			{
				++count;
			}
		}
	}
	cout << count << endl;
}
