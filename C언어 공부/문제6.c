//C��� ���� ����
//���ڿ��� �迭�� Ȱ���غ���

//����6 [���ڿ��� �迭]
//�Է� ���� ���ڿ��� ���̿� �� �������� ����Ͻÿ�.
#pragma warning(disable: 4996) 

#include <stdio.h>
#include <string.h>
int main()
{
	char word[100];
	int count;
	scanf("%s", word);
	
	printf("���� ��� : ");
	for (int i = strlen(word)-1; i >= 0; --i)
	{
		printf("%c", word[i]);
	}
	printf("  ���ڿ� ���� : %d", strlen(word));
}