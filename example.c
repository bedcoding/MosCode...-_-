#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"
#include "binmorsecode.h"
#include "binsearchtree.h"



int main(int argc, char *argv[])
{
	// 문제 1
	printf("1) 첫번째 문제 \n\n");

	BinTree *pTree = createMorseCodeBinTree();  // 트리 전체가 만들어진 뒤, *pTree에 들어간다.
	assignMorseCode(pTree);
	traverseMorseCodeBinTree(pTree);
	


	

	// 문제 2
	printf("\n\n\n\n\n");
	printf("2) 두번째 문제: 알파벳 삽입 \n");

	BinSearchTree *pTree2 = NULL;
	char word1[1000];
	char a_A = 'a'-'A';  //아스키코드값 차이(숫자로 쓰는 것보다 보기 좋아서 이렇게 표기함)

	int i = 0;
	int length1 = 0;
	int is_loop1 = 1;  // 반복문에서 반복 여부
	

	// 예외처리
	while (is_loop1)  
	{	
		// 일단 루프에 진입하면 무한루프 못돌게 0으로 변경
		is_loop1 = 0;

		// 글자 입력
		printf("알파벳으로 문장을 입력하세요(공백 포함) : ");
		gets(word1);  // scanf는 공백을 인식 못해서 'I Love You'를 치면 'I'만 저장됨

		// 문장의 길이 저장후 배열에 돌림
		length1 = strlen(word1);  


		for (i = 0; i < length1; i++)
		{
			// 소문자는 자동으로 대문자로 변환
			if (word1[i] >= 'a' && word1[i] <= 'z')
			{
				word1[i] = word1[i] - a_A;
			}

			// 대문자는 그냥 통과
			else if (word1[i] >= 'A' && word1[i] <= 'Z')
			{

			}

			// 공백도 통과
			else if (word1[i] == ' ')
			{

			}

			else
			{
				printf("잘못 입력했습니다.\n");
				is_loop1 = 1;
				break;
			}
		}
	}

	search_alphabet(pTree2, word1);





	// 문제 3
	printf("\n\n\n\n\n");
	printf("3) 세번째 문제: 모스코드 삽입 \n");

	BinSearchTree *pTree3 = NULL;
	char word2[1000];

	int ii = 0;
	int length2 = 0;
	int is_loop2 = 1;  // 반복문에서 반복 여부


	// 예외처리
	while (is_loop2)
	{
		// 일단 루프에 진입하면 무한루프 못돌게 0으로 변경
		is_loop2 = 0;

		// 글자 입력
		printf("'-'와 '.'와 공백' '을 사용해서 모스코드를 입력하십시오: ");
		gets(word2);  // scanf는 공백을 인식 못해서 'I Love You'를 치면 'I'만 저장됨

		// 문장의 길이 저장후 배열에 돌림
		length2 = strlen(word2);


		for (ii = 0; ii < length2; ii++)
		{
			if (word2[ii] != '-' && word2[ii] != '.' && word2[ii] != ' ')
			{
				printf("잘못 입력 : '-'과 '.'만 입력해야 합니다.\n");
				is_loop2 = 1;
				break;
			}
		}
	}

	printf("넣은 값: %s\n", word2);
	search_mos(pTree3, word2);
	return 0;
}