#include <iostream>
using namespace std;

//읽어오기만 할 것이기 떄문에 const
//int 배열의 최대값
int findmax(const int a[], int len)
{
	int maxval = a[0];
	for (int i = 1; i < len; ++i)
	{
		if (maxval < a[i])
			maxval = a[i];
	}
	return maxval;
}
//char 배열의 최대값
char findchar(const char a[])
{
	char maxch = a[0];
	for (int i = 1; i < strlen(a); ++i)
	{
		if (maxch < a[i])
			maxch = a[i];
	}
	return maxch;
}

void reverseint(const int a[], int b[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		b[len - i - 1] = a[i];
	}
}
void reveserchar(const char a[], char b[])
{
	int len = strlen(a);
	for (int i = 0; i < len; ++i)
	{
		b[len - i - 1] = a[i];
	}
	b[len] = '\0';
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10];
	char achar[] = "game over!";
	char bchar[40];

	reverseint(a, b, 10);
	reveserchar(achar, bchar);
	for (int i = 0; i < sizeof(b)/sizeof(int); ++i)
	{
		cout << b[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < strlen(bchar); ++i)
	{
		cout << bchar[i];
	}
}