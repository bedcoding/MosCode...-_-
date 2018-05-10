#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binmorsecode.h"

BinTreeNode* makeMorseNode(char key)
{   // ��� 1�� ����� �޸� �Ҵ�
	BinTreeNode *node = (BinTreeNode *)malloc(sizeof(BinTreeNode));
	if (node == NULL) {
		printf("����, �޸� �Ҵ�\n");
		exit(-1);
	}
	node->data = key;
	strcpy(node->morse_code, "\0");
	node->pLeftChild = NULL;
	node->pRightChild = NULL;
	
	return node;
}


void insertLeftChildMorseNode(BinTreeNode* parent, BinTreeNode* node)
{
	// �θ� ��尡 ���� ���
	if (parent == NULL)  
		return;

	// ���� �ڽ� ��尡 �̹� �����ϴ� ���
	if (parent->pLeftChild != NULL)  
		return;

	parent->pLeftChild = node;	
}


void insertRightChildMorseNode(BinTreeNode* parent, BinTreeNode* node)
{
	// �θ� ��尡 ���� ���
	if (parent == NULL)
		return;

	// ������ �ڽ� ��尡 �̹� �����ϴ� ���
	if (parent->pRightChild != NULL)
		return;

	parent->pRightChild = node;	
}


void initMorseCodeBinTree(BinTree *pTree)
{
	// ���� �̰� �����Լ��� ������ ��� stack ������ ����ǹǷ� {}�� ����� ���� �����Ͱ� �� ���ư���.
	// �̰��� hip ������ �����ϰ� ������ ��� ���� �� �� �ִ�. (��� ���� ����)
	BinTreeNode *e = makeMorseNode('E');
	BinTreeNode *t = makeMorseNode('T');
	BinTreeNode *i = makeMorseNode('I');
	BinTreeNode *a = makeMorseNode('A');
	BinTreeNode *n = makeMorseNode('N');
	BinTreeNode *m = makeMorseNode('M');
	BinTreeNode *s = makeMorseNode('S');
	BinTreeNode *u = makeMorseNode('U');
	BinTreeNode *r = makeMorseNode('R');
	BinTreeNode *w = makeMorseNode('W');
	BinTreeNode *d = makeMorseNode('D');
	BinTreeNode *k = makeMorseNode('K');
	BinTreeNode *g = makeMorseNode('G');
	BinTreeNode *o = makeMorseNode('O');
	BinTreeNode *h = makeMorseNode('H');
	BinTreeNode *v = makeMorseNode('V');
	BinTreeNode *f = makeMorseNode('F');
	BinTreeNode *l = makeMorseNode('L');
	BinTreeNode *p = makeMorseNode('P');
	BinTreeNode *j = makeMorseNode('J');
	BinTreeNode *b = makeMorseNode('B');
	BinTreeNode *x = makeMorseNode('X');
	BinTreeNode *c = makeMorseNode('C');
	BinTreeNode *y = makeMorseNode('Y');
	BinTreeNode *z = makeMorseNode('Z');
	BinTreeNode *q = makeMorseNode('Q');
	

	// ������ ������ �༮���� ����, ������ ��忡 �ִ´�.
	insertLeftChildMorseNode(pTree->pRootNode, e);
	insertRightChildMorseNode(pTree->pRootNode, t);
	
	insertLeftChildMorseNode(e, i);
	insertRightChildMorseNode(e, a);

	insertLeftChildMorseNode(t, n);
	insertRightChildMorseNode(t, m);

	insertLeftChildMorseNode(i, s);
	insertRightChildMorseNode(i, u);

	insertLeftChildMorseNode(a, r);
	insertRightChildMorseNode(a, w);

	insertLeftChildMorseNode(n, d);
	insertRightChildMorseNode(n, k);

	insertLeftChildMorseNode(m, g);
	insertRightChildMorseNode(m, o);

	insertLeftChildMorseNode(s, h);
	insertRightChildMorseNode(s, v);

	insertLeftChildMorseNode(u, f);
	
	insertLeftChildMorseNode(r, l);
	
	insertLeftChildMorseNode(w, p);
	insertRightChildMorseNode(w, j);

	insertLeftChildMorseNode(d, b);
	insertRightChildMorseNode(d, x);

	insertLeftChildMorseNode(k, c);
	insertRightChildMorseNode(k, y);

	insertLeftChildMorseNode(g, z);
	insertRightChildMorseNode(g, q);
}


BinTree* createMorseCodeBinTree()
{		
	BinTree *pTree = NULL;  // ���̳ʸ�Ʈ�� ������ pƮ�� ����
	pTree = (BinTree *)malloc(sizeof(BinTree));  // ���̳ʸ�Ʈ���� ��Ʈ��Ʈ �ϳ��� ���� �ִ�. �� �༮�� Ÿ�Կ��� data, morse_code, Left, Right�� �ִ�.
	if (pTree == NULL) {
		printf("����, �޸� �Ҵ�\n");
		exit(-1);  
	}

	pTree->pRootNode = (BinTreeNode *)malloc(sizeof(BinTreeNode));	// pƮ���� ���������, �� �ȿ� ��Ʈ��尡 �ִµ� ��Ʈ��Ʈ�� ������ش�	
	if (pTree->pRootNode == NULL) {
		printf("����, �޸� �Ҵ�\n");
		exit(-1);
	}

	pTree->pRootNode->data = ' ';  // ��Ʈ ��忡�� �ƹ��͵� ������� �ʴ�.
	strcpy(pTree->pRootNode->morse_code, "\0");
	pTree->pRootNode->pLeftChild = NULL;
	pTree->pRootNode->pRightChild = NULL;
	
	initMorseCodeBinTree(pTree);
	
	return pTree;
}

void assignNode(BinTreeNode* node, int is_right, const char* parent_morse)   // is_right: ���������� ���θ� 0�� 1�� Ȯ��
{
	if (node == NULL)
		return;
	
	// �� ��ȣ�� �Ҵ��Ѵ�
	if (is_right == 0) // �̰� �����̴�	
	{ 
		strcpy(node->morse_code, parent_morse);
		strcat(node->morse_code, "��");  // ������ ��� *�� �߰��Ѵ�. 
	} 
	
	else  // �̰� �������̴�
	{ 
		strcpy(node->morse_code, parent_morse);
		strcat(node->morse_code, "��");	// �������� ��� -�� �߰��Ѵ�.
	}

	// ���� child���� ���� �� �ݺ�
	assignNode(node->pLeftChild, 0, node->morse_code);

	// ���� child���� ���� �� �ݺ�
	assignNode(node->pRightChild, 1, node->morse_code);
}

void assignMorseCode(BinTree* morseCodeTree)
{
	assignNode(morseCodeTree->pRootNode->pLeftChild, 0, "");
	assignNode(morseCodeTree->pRootNode->pRightChild, 1, "");
}

void traverseMorseCodeBinTree(BinTree* morseCodeTree) {
	display(morseCodeTree->pRootNode, 0, 'L');
}

void display(BinTreeNode *pTreeNode, int level, char type)
{
    int i = 0;
	for (i = 0; i < level ; i++) {
		printf("    ");
	}

	if (pTreeNode != NULL) {
		printf("-[%i,%c]%c: %s\n", level, type, 
			pTreeNode->data, pTreeNode->morse_code);

		display(pTreeNode->pLeftChild, level + 1, 'L');
		display(pTreeNode->pRightChild, level + 1, 'R');
	}
	else {
		printf("NULL\n");
	}
}