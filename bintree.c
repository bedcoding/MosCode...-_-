#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

BinTree* makeBinTree(BinTreeNode rootNode)  // 이진 트리를 새로 만든 경우
{
	BinTree *pReturn = NULL;
	pReturn = (BinTree *)malloc(sizeof(BinTree));  // 이진트리 자체의 메모리 할당
	if (pReturn != NULL) {
		pReturn->pRootNode = (BinTreeNode *)malloc(sizeof(BinTreeNode));  // 루트 노드에 대한 메모리 할당
		if (pReturn->pRootNode != NULL) {
			*(pReturn->pRootNode) = rootNode;        // 데이터를 대입
			pReturn->pRootNode->pLeftChild = NULL;   // 왼쪽 포인터
			pReturn->pRootNode->pRightChild = NULL;  // 오른쪽 포인터
		}
		else {
			printf("오류, 메모리 할당(2) Error, memory allocation, makeBinTree()\n");
		}
	}
	else {
		printf("오류, 메모리 할당(1) Error, memory allocation, makeBinTree()\n");
	}
	return pReturn;
}

BinTreeNode* insertLeftChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element)  // 추가하려는 대상이 되는 노드의 포인터, 추가하려는 자료 전달
{
	BinTreeNode* pReturn = NULL;
	if (pParentNode != NULL) {  
		if (pParentNode->pLeftChild == NULL)  // 이미 자식이 존재하는지 검사
		{   
			pParentNode->pLeftChild = (BinTreeNode *)malloc(sizeof(BinTreeNode));  // 자식이 없을 경우 메모리 할당 시작
			if (pParentNode->pLeftChild != NULL) {
				*(pParentNode->pLeftChild) = element;         // 데이터를 대입한다.
				pParentNode->pLeftChild->pLeftChild = NULL;   // 자식의 자식(손자) null
				pParentNode->pLeftChild->pRightChild = NULL;  // 자식의 자식(손자) null
				pReturn = pParentNode->pLeftChild;            // 성공한 노드의 포인터 반환
			}
			else {
				printf("오류, 메모리 할당(Error, memory allocation), insertLeftChildNodeBT()\n");
			}
		}
		else {
			printf("오류, 이미 노드가 존재합니다(Error, node already exists), insertLeftChildNodeBT()\n");
		}
	}
	return pReturn;
}


BinTreeNode* insertRightChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element)
{
	BinTreeNode* pReturn = NULL;
	if (pParentNode != NULL) {
		if (pParentNode->pRightChild == NULL) {
			pParentNode->pRightChild = (BinTreeNode *)malloc(sizeof(BinTreeNode));
			if (pParentNode->pRightChild != NULL) {
				*(pParentNode->pRightChild) = element;
				pParentNode->pRightChild->pLeftChild = NULL;
				pParentNode->pRightChild->pRightChild = NULL;
				pReturn = pParentNode->pRightChild;
			}
			else {
				printf("오류, 메모리 할당(Error, memory allocation), insertRightChildNodeBT()\n");
			}
		}
		else {
			printf("오류, 이미 노드가 존재합니다(Error, node already exists), insertRightChildNodeBT()\n");
		}
	}
	return pReturn;
}

BinTreeNode* getRootNodeBT(BinTree* pBinTree)
{
	BinTreeNode* pReturn = NULL;

	if (pBinTree != NULL) {
		pReturn = pBinTree->pRootNode;  // 루트노드 포인터 반환
	}

	return pReturn;
}

BinTreeNode* getLeftChildNodeBT(BinTreeNode* pNode)
{
	BinTreeNode* pReturn = NULL;

	if (pNode != NULL) {
		pReturn = pNode->pLeftChild;  // 왼쪽 자식노드 포인터 반환
	}

	return pReturn;
}

BinTreeNode* getRightChildNodeBT(BinTreeNode* pNode)
{
	BinTreeNode* pReturn = NULL;

	if (pNode != NULL) {
		pReturn = pNode->pRightChild;  // 오른쪽 자식노드 포인터 반환
	}

	return pReturn;
}

// 삭제 (안씀)
void deleteBinTree(BinTree* pBinTree)
{
	if (pBinTree != NULL) {
		deleteBinTreeNode(pBinTree->pRootNode);
		free(pBinTree);
	}
}

void deleteBinTreeNode(BinTreeNode* pNode)
{
	if (pNode != NULL) {
		// 재귀적 방법으로 메모리 해제
		deleteBinTreeNode(pNode->pLeftChild);
		deleteBinTreeNode(pNode->pRightChild);
		free(pNode);
	}
}