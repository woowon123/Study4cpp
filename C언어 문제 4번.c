//C��� ���� ����
//�Լ��� ���ǿ� Ȱ��, ������ �� �� ������ Ȱ���� �غ���
//���ǹ�, �ݺ���, �Լ��� Ȱ���Ͽ� ������ �ذ��غ���

//����5 [�Ҽ��� ���]
//�Է� ���� �� ���� AB,  �� �� ������ �Ҽ��� ����϶�
//�Է� ���� ���� A�� Ŭ���� B�� Ŭ���� �ִ�.
#include <stdio.h>

void printhigher(int first, int second)
{
	int k;
	for (int i = 2; i < second + 1; ++i)
	{
		for (k = 2; k < i; ++k)
			if (i%k == 0)
				break;
		if (k == i)
		{
			if (i >= first)
			{
				printf("%d ", i);
			}
		}
	}
}
int main()
{
	int first, second;
	int k,h;
	scanf("%d %d", &first,&second);
	if (first < second)
	{
		k = first;
		h = second;
		printhigher(k, h);

	}
	if (first > second)
	{
		k = first;
		h = second;
		printhigher(h, k);

	}
	return 0;
}