//C��� ���� ����
//���ڿ��� �迭�� Ȱ���غ���

//����7 [���ڿ��� �迭]
//strcpy�� ������� ���� ���ڿ��� ������ ����
#pragma warning(disable: 4996) 

#include <stdio.h>
#include <string.h>


int wordcopy(char arc[], char buff[])
{
	for (int i = 0; i < strlen(arc); ++i)
	{
		buff[i] = arc[i];
	}
}

int main()
{
	char word[20] ="Orange";
	char word2[20] ="Programing";
	char buf1[20];
	char buf2[20];

	wordcopy(word, buf2);
	wordcopy(word2, buf1);

	printf("1��° ���� ���� %s\n2��° ���� ���� %s\n", buf1, buf2);
		
}