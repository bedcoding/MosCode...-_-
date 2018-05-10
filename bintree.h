#ifndef _BIN_TREE_
#define _BIN_TREE_

typedef struct BinTreeNodeType
{
	char data;			   // 알파벳
	char morse_code[100];  // 모스 코드 (추가 선언)

	struct BinTreeNodeType* pLeftChild;  // 포인터
	struct BinTreeNodeType* pRightChild; // 포인터
} BinTreeNode;  // 각각의 노드를 나타내는 BinTree 노드 구조체


typedef struct BinTreeType
{
	struct BinTreeNodeType* pRootNode;
} BinTree;  // BinTree 자료구조는 내부적으로 루트 노드에 대한 포인트만 갖고 있다. 


BinTree* makeBinTree(BinTreeNode rootNode);
BinTreeNode* getRootNodeBT(BinTree* pBinTree);
BinTreeNode* insertLeftChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* insertRightChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* getLeftChildNodeBT(BinTreeNode* pNode);
BinTreeNode* getRightChildNodeBT(BinTreeNode* pNode);
void deleteBinTree(BinTree* pBinTree);
void deleteBinTreeNode(BinTreeNode* pNode);

#endif

#ifndef _COMMON_TREE_DEF_
#define _COMMON_TREE_DEF_

#define TRUE		1
#define FALSE		0

#endif