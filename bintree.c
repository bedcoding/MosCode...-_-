#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

BinTree* makeBinTree(BinTreeNode rootNode)  // ���� Ʈ���� ���� ���� ���
{
	BinTree *pReturn = NULL;
	pReturn = (BinTree *)malloc(sizeof(BinTree));  // ����Ʈ�� ��ü�� �޸� �Ҵ�
	if (pReturn != NULL) {
		pReturn->pRootNode = (BinTreeNode *)malloc(sizeof(BinTreeNode));  // ��Ʈ ��忡 ���� �޸� �Ҵ�
		if (pReturn->pRootNode != NULL) {
			*(pReturn->pRootNode) = rootNode;        // �����͸� ����
			pReturn->pRootNode->pLeftChild = NULL;   // ���� ������
			pReturn->pRootNode->pRightChild = NULL;  // ������ ������
		}
		else {
			printf("����, �޸� �Ҵ�(2) Error, memory allocation, makeBinTree()\n");
		}
	}
	else {
		printf("����, �޸� �Ҵ�(1) Error, memory allocation, makeBinTree()\n");
	}
	return pReturn;
}

BinTreeNode* insertLeftChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element)  // �߰��Ϸ��� ����� �Ǵ� ����� ������, �߰��Ϸ��� �ڷ� ����
{
	BinTreeNode* pReturn = NULL;
	if (pParentNode != NULL) {  
		if (pParentNode->pLeftChild == NULL)  // �̹� �ڽ��� �����ϴ��� �˻�
		{   
			pParentNode->pLeftChild = (BinTreeNode *)malloc(sizeof(BinTreeNode));  // �ڽ��� ���� ��� �޸� �Ҵ� ����
			if (pParentNode->pLeftChild != NULL) {
				*(pParentNode->pLeftChild) = element;         // �����͸� �����Ѵ�.
				pParentNode->pLeftChild->pLeftChild = NULL;   // �ڽ��� �ڽ�(����) null
				pParentNode->pLeftChild->pRightChild = NULL;  // �ڽ��� �ڽ�(����) null
				pReturn = pParentNode->pLeftChild;            // ������ ����� ������ ��ȯ
			}
			else {
				printf("����, �޸� �Ҵ�(Error, memory allocation), insertLeftChildNodeBT()\n");
			}
		}
		else {
			printf("����, �̹� ��尡 �����մϴ�(Error, node already exists), insertLeftChildNodeBT()\n");
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
				printf("����, �޸� �Ҵ�(Error, memory allocation), insertRightChildNodeBT()\n");
			}
		}
		else {
			printf("����, �̹� ��尡 �����մϴ�(Error, node already exists), insertRightChildNodeBT()\n");
		}
	}
	return pReturn;
}

BinTreeNode* getRootNodeBT(BinTree* pBinTree)
{
	BinTreeNode* pReturn = NULL;

	if (pBinTree != NULL) {
		pReturn = pBinTree->pRootNode;  // ��Ʈ��� ������ ��ȯ
	}

	return pReturn;
}

BinTreeNode* getLeftChildNodeBT(BinTreeNode* pNode)
{
	BinTreeNode* pReturn = NULL;

	if (pNode != NULL) {
		pReturn = pNode->pLeftChild;  // ���� �ڽĳ�� ������ ��ȯ
	}

	return pReturn;
}

BinTreeNode* getRightChildNodeBT(BinTreeNode* pNode)
{
	BinTreeNode* pReturn = NULL;

	if (pNode != NULL) {
		pReturn = pNode->pRightChild;  // ������ �ڽĳ�� ������ ��ȯ
	}

	return pReturn;
}

// ���� (�Ⱦ�)
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
		// ����� ������� �޸� ����
		deleteBinTreeNode(pNode->pLeftChild);
		deleteBinTreeNode(pNode->pRightChild);
		free(pNode);
	}
}