#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"
#include "bintreetraversalrec.h"

// 전위순회
void preorderTraversalRecursiveBinTree(BinTree *pBinTree)  // 포인터로 구현한 이진트리 전달
{
	if (pBinTree != NULL) {
		preorderTraversalRecursiveBinTreeNode(pBinTree->pRootNode);  // 시작
	}
}

void preorderTraversalRecursiveBinTreeNode(BinTreeNode *pRootNode)
{
	if (pRootNode != NULL) {  
		printf("%c ", pRootNode->data);
		preorderTraversalRecursiveBinTreeNode(pRootNode->pLeftChild);  // 재귀
		preorderTraversalRecursiveBinTreeNode(pRootNode->pRightChild); // 재귀
	}
}

void inorderTraversalRecursiveBinTree(BinTree *pBinTree)
{
	if (pBinTree != NULL) {
		inorderTraversalRecursiveBinTreeNode(pBinTree->pRootNode);
	}
}

void inorderTraversalRecursiveBinTreeNode(BinTreeNode *pRootNode)
{
	if (pRootNode != NULL) {
		inorderTraversalRecursiveBinTreeNode(pRootNode->pLeftChild);
		printf("%c ", pRootNode->data);
		inorderTraversalRecursiveBinTreeNode(pRootNode->pRightChild);
	}
}

void postorderTraversalRecursiveBinTree(BinTree *pBinTree)
{
	if (pBinTree != NULL) {
		postorderTraversalRecursiveBinTreeNode(pBinTree->pRootNode);
	}

}

void postorderTraversalRecursiveBinTreeNode(BinTreeNode *pRootNode)
{
	if (pRootNode != NULL) {
		postorderTraversalRecursiveBinTreeNode(pRootNode->pLeftChild);
		postorderTraversalRecursiveBinTreeNode(pRootNode->pRightChild);
		printf("%c ", pRootNode->data);

	}
}
