#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"
#include "binmorsecode.h"
#include "binsearchtree.h"


void search_mos(BinSearchTree *pTree3, char *word)
{
	int i = 0; // �ݺ���
	char mos_print[3000] = "";
	char space[10] = " ";

	BinSearchTreeNode *pSearchNode = NULL;
	char key = ' ';
	char *token;   // ������ �������� ������ ������.

	

	
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
	BinSearchTreeNode e2 = { 'E', "��" };
	BinSearchTreeNode e3 = { 'T', "��" };
	BinSearchTreeNode e4 = { 'I', "�ܡ�" };
	BinSearchTreeNode e5 = { 'A', "�ܤ�" };
	BinSearchTreeNode e6 = { 'N', "�ѡ�" };
	BinSearchTreeNode e7 = { 'M', "�Ѥ�" };
	BinSearchTreeNode e8 = { 'S', "�ܡܡ�" };
	BinSearchTreeNode e9 = { 'U', "�ܡܤ�" };
	BinSearchTreeNode e10 = { 'R', "�ܤѡ�" };
	BinSearchTreeNode e11 = { 'W', "�ܤѤ�" };
	BinSearchTreeNode e12 = { 'D', "�ѡܡ�" };
	BinSearchTreeNode e13 = { 'K', "�ѡܤ�" };
	BinSearchTreeNode e14 = { 'G', "�Ѥѡ�" };
	BinSearchTreeNode e15 = { 'O', "�ѤѤ�" };
	BinSearchTreeNode e16 = { 'H', "�ܡܡܡ�" };
	BinSearchTreeNode e17 = { 'V', "�ܡܡܤ�" };
	BinSearchTreeNode e18 = { 'F', "�ܡܤѡ�" };
	BinSearchTreeNode e19 = { 'L', "�ܤѡܡ�" };
	BinSearchTreeNode e20 = { 'P', "�ܤѤѡ�" };
	BinSearchTreeNode e21 = { 'J', "�ܤѤѤ�" };
	BinSearchTreeNode e22 = { 'B', "�ѡܡܡ�" };
	BinSearchTreeNode e23 = { 'X', "�ѡܡܤ�" };
	BinSearchTreeNode e24 = { 'C', "�ѡܤѡ�" };
	BinSearchTreeNode e25 = { 'Y', "�ѡܤѤ�" };
	BinSearchTreeNode e26 = { 'Z', "�Ѥѡܡ�" };
	BinSearchTreeNode e27 = { 'Q', "�Ѥѡܤ�" };


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
			// token�� �𽺺�ȣ�� �������� �Ǻ��ϴ� �Լ�
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
				printf("�߸��� �� �ڵ���: %s \n", token);
			}


			printf("strtok �Լ� �����: %s \n", token);
			token = strtok(NULL, " ");
		}

		printf("\n\n-------------------------\n");
		printf("���ڵ� �˻� ���: ");
		printf(mos_print);
		printf("\n");

		
	}
}