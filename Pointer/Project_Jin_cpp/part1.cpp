#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//������
void main()
{
	int x = 10;
	int* px = &x;
	int** ppx = &px;

	**ppx = 20;
	cout << "x " << x << endl;
	cout << "px  " << *px << endl; //*�� �Ⱥ��ϰ�� x�� �ּҸ� ����Ų��.
	cout << "ppx  " << **ppx << endl; // *�ϳ��� ���̸� x�� �ּҸ� ����Ų��. *�� �Ⱥ��̸� px�� �ּҸ� ����Ų��.
	//ppx�� ��ü �ּҴ� &ppx

}