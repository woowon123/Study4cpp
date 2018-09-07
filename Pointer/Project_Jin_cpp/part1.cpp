#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//포안터
void main()
{
	int x = 10;
	int* px = &x;
	int** ppx = &px;

	**ppx = 20;
	cout << "x " << x << endl;
	cout << "px  " << *px << endl; //*를 안붙일경우 x의 주소를 가르킨다.
	cout << "ppx  " << **ppx << endl; // *하나만 붙이면 x의 주소를 가르킨다. *를 안붙이면 px의 주소를 가르킨다.
	//ppx의 자체 주소는 &ppx

}