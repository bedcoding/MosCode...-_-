#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"
#include "binmorsecode.h"
#include "binsearchtree.h"


void search_alphabet(BinSearchTree *pTree2, char *word)
{

	int i = 0; // 반복문
	char mos_print[3000] = "";
	char space[10] = " ";

	BinSearchTreeNode *pSearchNode = NULL;
	char key = ' ';


	BinSearchTreeNode e1 = { ' ', "  " };
	BinSearchTreeNode e2 = { 'E', "." };
	BinSearchTreeNode e3 = { 'T', "-" };
	BinSearchTreeNode e4 = { 'I', ".." };
	BinSearchTreeNode e5 = { 'A', ".-" };
	BinSearchTreeNode e6 = { 'N', "-." };
	BinSearchTreeNode e7 = { 'M', "--" };
	BinSearchTreeNode e8 = { 'S', "..." };
	BinSearchTreeNode e9 = { 'U', "..-" };
	BinSearchTreeNode e10 = { 'R', ".-." };
	BinSearchTreeNode e11 = { 'W', ".--" };
	BinSearchTreeNode e12 = { 'D', "-.." };
	BinSearchTreeNode e13 = { 'K', "-.-" };
	BinSearchTreeNode e14 = { 'G', "--." };
	BinSearchTreeNode e15 = { 'O', "---" };
	BinSearchTreeNode e16 = { 'H', "...." };
	BinSearchTreeNode e17 = { 'V', "...-" };
	BinSearchTreeNode e18 = { 'F', "..-." };
	BinSearchTreeNode e19 = { 'L', ".-.." };
	BinSearchTreeNode e20 = { 'P', ".--." };
	BinSearchTreeNode e21 = { 'J', ".---" };
	BinSearchTreeNode e22 = { 'B', "-..." };
	BinSearchTreeNode e23 = { 'X', "-..-" };
	BinSearchTreeNode e24 = { 'C', "-.-." };
	BinSearchTreeNode e25 = { 'Y', "-.--" };
	BinSearchTreeNode e26 = { 'Z', "--.." };
	BinSearchTreeNode e27 = { 'Q', "--.-" };



	pTree2 = createBinSearchTree();
	if (pTree2 != NULL)
	{
		insertElementBST(pTree2, e1);
		insertElementBST(pTree2, e2);
		insertElementBST(pTree2, e3);
		insertElementBST(pTree2, e4);
		insertElementBST(pTree2, e5);
		insertElementBST(pTree2, e6);
		insertElementBST(pTree2, e7);
		insertElementBST(pTree2, e8);
		insertElementBST(pTree2, e9);
		insertElementBST(pTree2, e10);
		insertElementBST(pTree2, e11);
		insertElementBST(pTree2, e12);
		insertElementBST(pTree2, e13);
		insertElementBST(pTree2, e14);
		insertElementBST(pTree2, e15);
		insertElementBST(pTree2, e16);
		insertElementBST(pTree2, e17);
		insertElementBST(pTree2, e18);
		insertElementBST(pTree2, e19);
		insertElementBST(pTree2, e20);
		insertElementBST(pTree2, e21);
		insertElementBST(pTree2, e22);
		insertElementBST(pTree2, e23);
		insertElementBST(pTree2, e24);
		insertElementBST(pTree2, e25);
		insertElementBST(pTree2, e26);
		insertElementBST(pTree2, e27);
	}


		for (i = 0; word[i]; i++)
		{
			key = word[i];
			pSearchNode = searchBST(pTree2, key);
			
			strcat(mos_print, pSearchNode->value);
			strcat(mos_print, space);
		}
		

		/* 
			//초창기 방식
			
			key = 'M';  
			pSearchNode = searchBST(pTree2, key);
			strcat(mos_print, pSearchNode->value);
			strcat(mos_print, space);
		*/
		
		printf("MORSE 검색 결과: ");
		printf(mos_print);
		printf("\n");
	
}