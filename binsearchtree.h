#ifndef _BIN_SEARCH_TREE_
#define _BIN_SEARCH_TREE_

typedef struct BinSearchTreeNodeType
{
	char key;
	char value[100];

	struct BinSearchTreeNodeType* pLeftChild;
	struct BinSearchTreeNodeType* pRightChild;
} BinSearchTreeNode;

typedef struct BinSearchTreeType
{
	BinSearchTreeNode *pRootNode;
} BinSearchTree;

BinSearchTree* createBinSearchTree();
char insertElementBST(BinSearchTree* pBinSearchTree, BinSearchTreeNode element);
char deleteElementBST(BinSearchTree* pBinSearchTree, char key);

BinSearchTreeNode* searchRecursiveBST(BinSearchTree* pBinSearchTree, char key);
BinSearchTreeNode* searchInternalRecursiveBST(BinSearchTreeNode* 
	, char key);
BinSearchTreeNode* searchBST(BinSearchTree* pBinSearchTree, char key);

void deleteBinSearchTree(BinSearchTree* pBinSearchTree);
void deleteBinSearchTreeInternal(BinSearchTreeNode* pTreeNode);

#endif

#ifndef _COMMON_TREE_DEF_
#define _COMMON_TREE_DEF_

#define TRUE		1
#define FALSE		0

#endif