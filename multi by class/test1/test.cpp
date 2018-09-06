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
	void play(int dan)
	{
		for (int i = start; i < end + 1; ++i)
		{
			cout << dan * i << endl;
		}
	}

};

void main()
{
	dan jin;
	jin.play(5);
	cout << "--------------" << endl;
	jin.set(2, 5);
	jin.play(3);
}