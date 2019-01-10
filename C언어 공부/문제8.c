//C언어 기초 공부
//문자열과 배열을 활용해보자

//문제7 [문자열과 배열]
//strcpy를 사용하지 말고 문자열을 복사해 보자
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
			printf("회문이 아닙니다.");
			check = 1;
			break;
		}
	}

	if (check != 1)
		printf("회문입니다");
}
