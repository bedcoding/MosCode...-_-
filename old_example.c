// 프리렉 예제파일을 활용해서 제작했습니다.
// main 함수에 너무 많은 값이 들어 있어서 이후 수정했습니다.

//#include <stdio.h>
//#include <stdlib.h>
//#include "bintree.h"
//#include "bintreeop.h"
//
//BinTree* createExampleBinTree();
//
//int main(int argc, char *argv[])
//{
//	int compareResult = FALSE;
//	int count = 0;
//	BinTree *pBinTree = NULL, *pCopyBinTree = NULL;
//
//	pBinTree = createExampleBinTree();
//	printf("Binary tree source:\n");
//	displayBinTree(pBinTree);
//
//	return 0;
//}
//
//
//
//BinTree* createExampleBinTree()
//{
//	BinTree* pReturn = NULL;
//
//	BinTreeNode *pNodeFirst = NULL;
//	BinTreeNode *pNodeE = NULL, *pNodeT = NULL;
//	BinTreeNode *pNodeI = NULL, *pNodeA = NULL, *pNodeN = NULL, *pNodeM = NULL;
//
//	BinTreeNode *pNodeS = NULL, *pNodeU = NULL, *pNodeR = NULL, *pNodeW = NULL;
//	BinTreeNode *pNodeD = NULL, *pNodeK = NULL, *pNodeG = NULL, *pNodeO = NULL;
//
//	BinTreeNode *pNodeH = NULL, *pNodeV = NULL, *pNodeF = NULL;
//	BinTreeNode *pNodeL = NULL, *pNodeP = NULL, *pNodeJ = NULL;
//	BinTreeNode *pNodeB = NULL, *pNodeX = NULL, *pNodeC = NULL, *pNodeY = NULL;
//	BinTreeNode *pNodeZ = NULL, *pNodeQ = NULL;
//
//	BinTreeNode node = {0,};
//	
//	node.data = ' ';
//	pReturn = makeBinTree(node);
//	if (pReturn != NULL) {
//		pNodeFirst = getRootNodeBT(pReturn);
//
//		// ←←
//		node.data = 'E';
//		strcpy(node.morse_code, "●");  // C언어에서는 node.morse_code = "." 이렇게 대입이 안되서 검색해보니 strcpy를 써야 하더군요
//		pNodeE = insertLeftChildNodeBT(pNodeFirst, node);
//
//		// →→
//		node.data = 'T';
//		strcpy(node.morse_code, "ㅡ");
//		pNodeT = insertRightChildNodeBT(pNodeFirst, node);
//
//
//		// E
//		if (pNodeE != NULL) {
//			// ←←
//			node.data = 'I';
//			strcpy(node.morse_code, "●●");
//			pNodeI = insertLeftChildNodeBT(pNodeE, node);
//
//			// →→
//			node.data = 'A';
//			strcpy(node.morse_code, "●ㅡ");
//			pNodeA = insertRightChildNodeBT(pNodeE, node);
//		}
//
//		// T
//		if (pNodeT != NULL) {
//			// ←←
//			node.data = 'N';
//			strcpy(node.morse_code, "ㅡ●");
//			pNodeN = insertLeftChildNodeBT(pNodeT, node);
//
//			// →→
//			node.data = 'M';
//			strcpy(node.morse_code, "ㅡㅡ");
//			pNodeM = insertRightChildNodeBT(pNodeT, node);
//		}
//
//
//
//		
//
//		// I
//		if (pNodeI != NULL) {
//			// ←←
//			node.data = 'S';
//			strcpy(node.morse_code, "●●●");
//			pNodeS = insertLeftChildNodeBT(pNodeI, node);
//
//			// →→
//			node.data = 'U';
//			strcpy(node.morse_code, "●●ㅡ");
//			pNodeU = insertRightChildNodeBT(pNodeI, node);
//		}
//
//		// A
//		if (pNodeA != NULL) {
//			// ←←
//			node.data = 'R';
//			strcpy(node.morse_code, "●ㅡ");
//			pNodeR = insertLeftChildNodeBT(pNodeA, node);
//			
//			// →→
//			node.data = 'W';
//			strcpy(node.morse_code, "●ㅡㅡ");
//			pNodeW = insertRightChildNodeBT(pNodeA, node);
//		}
//
//		// N
//		if (pNodeN != NULL) {
//			// ←←
//			node.data = 'D';
//			strcpy(node.morse_code, "ㅡ●●");
//			pNodeD = insertLeftChildNodeBT(pNodeN, node);
//
//			// →→
//			node.data = 'K';
//			strcpy(node.morse_code, "ㅡ●ㅡ");
//			pNodeK = insertRightChildNodeBT(pNodeN, node);
//		}
//		
//		// M
//		if (pNodeM != NULL) {
//			// ←←
//			node.data = 'G';
//			strcpy(node.morse_code, "ㅡㅡ●");
//			pNodeG = insertLeftChildNodeBT(pNodeM, node);
//
//			// →→
//			node.data = 'O';
//			strcpy(node.morse_code, "ㅡㅡㅡ");
//			pNodeO = insertRightChildNodeBT(pNodeM, node);
//		}
//
//
//
//
//
//		// S
//		if (pNodeS != NULL) {
//			// ←←
//			node.data = 'H';
//			strcpy(node.morse_code, "●●●●");
//			pNodeH = insertLeftChildNodeBT(pNodeS, node);
//
//			// →→
//			node.data = 'V';
//			strcpy(node.morse_code, "●●●ㅡ");
//			pNodeV = insertRightChildNodeBT(pNodeS, node);
//		}
//
//		// U
//		if (pNodeU != NULL) {
//			// ←←
//			node.data = 'F';
//			strcpy(node.morse_code, "●●ㅡ");
//			pNodeF = insertLeftChildNodeBT(pNodeU, node);
//		}
//
//		// R
//		if (pNodeR != NULL) {
//			// ←←
//			node.data = 'L';
//			strcpy(node.morse_code, "●ㅡ●●");
//			pNodeL = insertLeftChildNodeBT(pNodeR, node);
//		}
//
//		// W
//		if (pNodeW != NULL) {
//			// ←←
//			node.data = 'P';
//			strcpy(node.morse_code, "●ㅡㅡ●");
//			pNodeP = insertLeftChildNodeBT(pNodeW, node);
//
//			// →→
//			node.data = 'J';
//			strcpy(node.morse_code, "●ㅡㅡㅡ");
//			pNodeJ = insertRightChildNodeBT(pNodeW, node);
//		}
//
//		// D
//		if (pNodeD != NULL) {
//			// ←←
//			node.data = 'B';
//			strcpy(node.morse_code, "ㅡ●●●");
//			pNodeB = insertLeftChildNodeBT(pNodeD, node);
//
//			// →→
//			node.data = 'X';
//			strcpy(node.morse_code, "ㅡ●●ㅡ");
//			pNodeX = insertRightChildNodeBT(pNodeD, node);
//		}
//
//		// K
//		if (pNodeK != NULL) {
//			// ←←
//			node.data = 'C';
//			strcpy(node.morse_code, "ㅡ●ㅡ●");
//			pNodeC = insertLeftChildNodeBT(pNodeK, node);
//
//			// →→
//			node.data = 'Y';
//			strcpy(node.morse_code, "ㅡ●ㅡㅡ");
//			pNodeY = insertRightChildNodeBT(pNodeK, node);
//		}
//
//		// G
//		if (pNodeG != NULL) {
//			// ←←
//			node.data = 'Z';
//			strcpy(node.morse_code, "ㅡㅡ●●");
//			pNodeZ = insertLeftChildNodeBT(pNodeG, node);
//
//			// →→
//			node.data = 'Q';
//			strcpy(node.morse_code, "ㅡㅡ●ㅡ");
//			pNodeQ = insertRightChildNodeBT(pNodeG, node);
//		}
//	}
//
//	return pReturn;
//}