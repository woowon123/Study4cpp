//C��� ���� ����
//�Լ��� ���ǿ� Ȱ��, ������ �� �� ������ Ȱ���� �غ���

//���� 1 
//�Է¹޴� �ʴ��� ���ڸ� ��:��:�ʷ� ������ ����غ���
#include <stdio.h>

void changeSec(int num)
{
	int total = num;
	int h = total / 3600;
	int m = (total % 3600) / 60;
	int s = (total % 3600) % 60;

	printf("%d : %d : %d", h, m, s);
}

int main()
{

	int sec;
	scanf("%d", &sec);
	changeSec(sec);
	return 0;
}