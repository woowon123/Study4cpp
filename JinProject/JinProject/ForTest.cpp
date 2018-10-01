#include <iostream>
#include <string>
#include <set>
using namespace std;
void searchNumer();


int main()
{
	searchNumer();
}

void searchNumer()
{
	set<int> s;
	int number;
	int number2 = 0;
	for (int i = 1; i <= 10000; ++i)
	{
		s.insert(i);
	}

	for (int result = 1; result < 10000; ++result)
	{
		if (result >= 1000 && result <= 10000)
		{

			number = result + (result / 1000) + ((result % 1000) / 100) + (((result % 1000) % 100) / 10) + (((result % 1000) % 100) % 10);
				if (number <= 10000)
					s.erase(number);
		}
		else if (result >= 100 && result <= 999)
		{
			number = result + ((result / 100)) + (((result / 10)) % 10) + ((result % 100) % 10);
			if (number <= 10000)
				s.erase(number);
		}
		else if (result >= 10 && result <= 99)
		{
			number = result + ((result / 10)) + (result % 10);
			if (number <= 10000)
				s.erase(number);
		}
		else
		{
			number = result + result;
			if (number <= 10000)
				s.erase(number);
		}
	}
	
	
	for (auto p = s.begin(); p != s.end(); ++p)
	{
		cout << *p << endl;
	}
}
