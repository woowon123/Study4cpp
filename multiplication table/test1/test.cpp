#include <iostream>
using namespace std;

void printGoo(int a)
{
	for (int i = 1; i < 10; ++i)
	{
		cout << a * i << endl;
	}
}

void main()
{
	int a;
	cout << "in put num :";
	cin >> a;
	printGoo(a);

}