//C언어 기초 공부
//문자열과 배열을 활용해보자

//문제7 [문자열과 배열]
//strcpy를 사용하지 말고 문자열을 복사해 보자
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

	printf("1번째 복사 문자 %s\n2번째 복사 문자 %s\n", buf1, buf2);
		
}