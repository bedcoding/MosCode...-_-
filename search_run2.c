#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"
#include "binmorsecode.h"
#include "binsearchtree.h"


void search_mos(BinSearchTree *pTree3, char *word)
{
	int i = 0; // 반복문
	char mos_print[3000] = "";
	char space[10] = " ";

	BinSearchTreeNode *pSearchNode = NULL;
	char key = ' ';
	char *token;   // 공백을 기준으로 문장을 나눈다.

	

	
	char mosE[10] = ".";
	char mosT[10] = "-";

	char mosI[10] = "..";
	char mosA[10] = ".-";

	char mosN[10] = "-.";
	char mosM[10] = "--";

	char mosS[10] = "...";
	char mosU[10] = "..-";

	char mosR[10] = ".-.";
	char mosW[10] = ".--";

	char mosD[10] = "-..";
	char mosK[10] = "-.-";

	char mosG[10] = "--.";
	char mosO[10] = "---";

	char mosH[10] = "....";
	char mosV[10] = "...-";

	char mosF[10] = "..-.";
	char mosL[10] = ".-..";

	char mosP[10] = ".--.";
	char mosJ[10] = ".---";

	char mosB[10] = "-...";
	char mosX[10] = "-..-";

	char mosC[10] = "-.-.";
	char mosY[10] = "-.--";

	char mosZ[10] = "--..";
	char mosQ[10] = "--.-";
	
	
	BinSearchTreeNode e1 = { ' ', "  " };
	BinSearchTreeNode e2 = { 'E', "●" };
	BinSearchTreeNode e3 = { 'T', "ㅡ" };
	BinSearchTreeNode e4 = { 'I', "●●" };
	BinSearchTreeNode e5 = { 'A', "●ㅡ" };
	BinSearchTreeNode e6 = { 'N', "ㅡ●" };
	BinSearchTreeNode e7 = { 'M', "ㅡㅡ" };
	BinSearchTreeNode e8 = { 'S', "●●●" };
	BinSearchTreeNode e9 = { 'U', "●●ㅡ" };
	BinSearchTreeNode e10 = { 'R', "●ㅡ●" };
	BinSearchTreeNode e11 = { 'W', "●ㅡㅡ" };
	BinSearchTreeNode e12 = { 'D', "ㅡ●●" };
	BinSearchTreeNode e13 = { 'K', "ㅡ●ㅡ" };
	BinSearchTreeNode e14 = { 'G', "ㅡㅡ●" };
	BinSearchTreeNode e15 = { 'O', "ㅡㅡㅡ" };
	BinSearchTreeNode e16 = { 'H', "●●●●" };
	BinSearchTreeNode e17 = { 'V', "●●●ㅡ" };
	BinSearchTreeNode e18 = { 'F', "●●ㅡ●" };
	BinSearchTreeNode e19 = { 'L', "●ㅡ●●" };
	BinSearchTreeNode e20 = { 'P', "●ㅡㅡ●" };
	BinSearchTreeNode e21 = { 'J', "●ㅡㅡㅡ" };
	BinSearchTreeNode e22 = { 'B', "ㅡ●●●" };
	BinSearchTreeNode e23 = { 'X', "ㅡ●●ㅡ" };
	BinSearchTreeNode e24 = { 'C', "ㅡ●ㅡ●" };
	BinSearchTreeNode e25 = { 'Y', "ㅡ●ㅡㅡ" };
	BinSearchTreeNode e26 = { 'Z', "ㅡㅡ●●" };
	BinSearchTreeNode e27 = { 'Q', "ㅡㅡ●ㅡ" };


	pTree3 = createBinSearchTree();
	if (pTree3 != NULL)
	{
		insertElementBST(pTree3, e1);
		insertElementBST(pTree3, e2);
		insertElementBST(pTree3, e3);
		insertElementBST(pTree3, e4);
		insertElementBST(pTree3, e5);
		insertElementBST(pTree3, e6);
		insertElementBST(pTree3, e7);
		insertElementBST(pTree3, e8);
		insertElementBST(pTree3, e9);
		insertElementBST(pTree3, e10);
		insertElementBST(pTree3, e11);
		insertElementBST(pTree3, e12);
		insertElementBST(pTree3, e13);
		insertElementBST(pTree3, e14);
		insertElementBST(pTree3, e15);
		insertElementBST(pTree3, e16);
		insertElementBST(pTree3, e17);
		insertElementBST(pTree3, e18);
		insertElementBST(pTree3, e19);
		insertElementBST(pTree3, e20);
		insertElementBST(pTree3, e21);
		insertElementBST(pTree3, e22);
		insertElementBST(pTree3, e23);
		insertElementBST(pTree3, e24);
		insertElementBST(pTree3, e25);
		insertElementBST(pTree3, e26);
		insertElementBST(pTree3, e27);



		
		
		token = strtok(word, " ");
		
		while (token != NULL)
		{
			// token의 모스부호가 정상인지 판별하는 함수
			if (strcmp(token, mosA) == 0)  
			{
				key = 'A';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosB) == 0)
			{
				key = 'B';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosC) == 0)
			{
				key = 'C';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosD) == 0)
			{
				key = 'D';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosE) == 0)
			{
				key = 'E';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosF) == 0)
			{
				key = 'F';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosG) == 0)
			{
				key = 'G';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosH) == 0)
			{
				key = 'H';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosI) == 0)
			{
				key = 'I';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosJ) == 0)
			{
				key = 'J';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosK) == 0)
			{
				key = 'K';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosL) == 0)
			{
				key = 'L';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosM) == 0)
			{
				key = 'M';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosN) == 0)
			{
				key = 'N';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosO) == 0)
			{
				key = 'O';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosP) == 0)
			{
				key = 'P';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosQ) == 0)
			{
				key = 'Q';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosR) == 0)
			{
				key = 'R';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosS) == 0)
			{
				key = 'S';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosT) == 0)
			{
				key = 'T';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosU) == 0)
			{
				key = 'U';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosV) == 0)
			{
				key = 'V';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosW) == 0)
			{
				key = 'W';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosX) == 0)
			{
				key = 'X';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosY) == 0)
			{
				key = 'Y';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else if (strcmp(token, mosZ) == 0)
			{
				key = 'Z';

				pSearchNode = searchBST(pTree3, key);
				char tmp[10] = { pSearchNode->key };
				strcat(mos_print, tmp);
				strcat(mos_print, space);
			}

			else
			{
				printf("-------------------------\n");
				printf("잘못된 모스 코드임: %s \n", token);
			}


			printf("strtok 함수 사용후: %s \n", token);
			token = strtok(NULL, " ");
		}

		printf("\n\n-------------------------\n");
		printf("모스코드 검색 결과: ");
		printf(mos_print);
		printf("\n");

		
	}
}