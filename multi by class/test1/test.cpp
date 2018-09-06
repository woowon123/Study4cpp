#include <iostream>
using namespace std;

class dan
{
private:
	int start;
	int end;
public:
	dan() { set(1, 9); };
	~dan() {};

	void set(int s, int b) { start = s; end = b; }
	void play()
	{
		for (int i = 1; i < 10; ++i)
		{
			for (int j = 2; j < 6; ++j)
			{
				cout << j * i << "\t";
			}
			cout << endl;
		}
		cout << endl; cout << endl;
		for (int i = 1; i < 10; ++i)
		{
			for (int j = 6; j < 10; ++j)
			{
				cout << j * i << "\t";
			}
			cout << endl;
		}
	}

};

void main()
{
	dan jin;
	jin.play();
}