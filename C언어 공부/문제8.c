//C��� ���� ����
//���ڿ��� �迭�� Ȱ���غ���

//����7 [���ڿ��� �迭]
//strcpy�� ������� ���� ���ڿ��� ������ ����
#pragma warning(disable: 4996) 

#include <stdio.h>
#include <string.h>




int main()
{
	char word[100];
	int check = 0;
	scanf("%s", word);
	for (int i = 0; i < strlen(word)/2; ++i)
	{
		if (word[i] != word[strlen(word)-1- i])
		{
			printf("ȸ���� �ƴմϴ�.");
			check = 1;
			break;
		}
	}

	if (check != 1)
		printf("ȸ���Դϴ�");
}
