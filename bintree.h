#ifndef _BIN_TREE_
#define _BIN_TREE_

typedef struct BinTreeNodeType
{
	char data;			   // ���ĺ�
	char morse_code[100];  // �� �ڵ� (�߰� ����)

	struct BinTreeNodeType* pLeftChild;  // ������
	struct BinTreeNodeType* pRightChild; // ������
} BinTreeNode;  // ������ ��带 ��Ÿ���� BinTree ��� ����ü


typedef struct BinTreeType
{
	struct BinTreeNodeType* pRootNode;
} BinTree;  // BinTree �ڷᱸ���� ���������� ��Ʈ ��忡 ���� ����Ʈ�� ���� �ִ�. 


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