#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"
#include "binmorsecode.h"
#include "binsearchtree.h"



int main(int argc, char *argv[])
{
	// ���� 1
	printf("1) ù��° ���� \n\n");

	BinTree *pTree = createMorseCodeBinTree();  // Ʈ�� ��ü�� ������� ��, *pTree�� ����.
	assignMorseCode(pTree);
	traverseMorseCodeBinTree(pTree);
	


	

	// ���� 2
	printf("\n\n\n\n\n");
	printf("2) �ι�° ����: ���ĺ� ���� \n");

	BinSearchTree *pTree2 = NULL;
	char word1[1000];
	char a_A = 'a'-'A';  //�ƽ�Ű�ڵ尪 ����(���ڷ� ���� �ͺ��� ���� ���Ƽ� �̷��� ǥ����)

	int i = 0;
	int length1 = 0;
	int is_loop1 = 1;  // �ݺ������� �ݺ� ����
	

	// ����ó��
	while (is_loop1)  
	{	
		// �ϴ� ������ �����ϸ� ���ѷ��� ������ 0���� ����
		is_loop1 = 0;

		// ���� �Է�
		printf("���ĺ����� ������ �Է��ϼ���(���� ����) : ");
		gets(word1);  // scanf�� ������ �ν� ���ؼ� 'I Love You'�� ġ�� 'I'�� �����

		// ������ ���� ������ �迭�� ����
		length1 = strlen(word1);  


		for (i = 0; i < length1; i++)
		{
			// �ҹ��ڴ� �ڵ����� �빮�ڷ� ��ȯ
			if (word1[i] >= 'a' && word1[i] <= 'z')
			{
				word1[i] = word1[i] - a_A;
			}

			// �빮�ڴ� �׳� ���
			else if (word1[i] >= 'A' && word1[i] <= 'Z')
			{

			}

			// ���鵵 ���
			else if (word1[i] == ' ')
			{

			}

			else
			{
				printf("�߸� �Է��߽��ϴ�.\n");
				is_loop1 = 1;
				break;
			}
		}
	}

	search_alphabet(pTree2, word1);





	// ���� 3
	printf("\n\n\n\n\n");
	printf("3) ����° ����: ���ڵ� ���� \n");

	BinSearchTree *pTree3 = NULL;
	char word2[1000];

	int ii = 0;
	int length2 = 0;
	int is_loop2 = 1;  // �ݺ������� �ݺ� ����


	// ����ó��
	while (is_loop2)
	{
		// �ϴ� ������ �����ϸ� ���ѷ��� ������ 0���� ����
		is_loop2 = 0;

		// ���� �Է�
		printf("'-'�� '.'�� ����' '�� ����ؼ� ���ڵ带 �Է��Ͻʽÿ�: ");
		gets(word2);  // scanf�� ������ �ν� ���ؼ� 'I Love You'�� ġ�� 'I'�� �����

		// ������ ���� ������ �迭�� ����
		length2 = strlen(word2);


		for (ii = 0; ii < length2; ii++)
		{
			if (word2[ii] != '-' && word2[ii] != '.' && word2[ii] != ' ')
			{
				printf("�߸� �Է� : '-'�� '.'�� �Է��ؾ� �մϴ�.\n");
				is_loop2 = 1;
				break;
			}
		}
	}

	printf("���� ��: %s\n", word2);
	search_mos(pTree3, word2);
	return 0;
}