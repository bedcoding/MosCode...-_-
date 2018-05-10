#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binmorsecode.h"

BinTreeNode* makeMorseNode(char key)
{   // 노드 1개 만들고 메모리 할당
	BinTreeNode *node = (BinTreeNode *)malloc(sizeof(BinTreeNode));
	if (node == NULL) {
		printf("오류, 메모리 할당\n");
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
	// 부모 노드가 없을 경우
	if (parent == NULL)  
		return;

	// 왼쪽 자식 노드가 이미 존재하는 경우
	if (parent->pLeftChild != NULL)  
		return;

	parent->pLeftChild = node;	
}


void insertRightChildMorseNode(BinTreeNode* parent, BinTreeNode* node)
{
	// 부모 노드가 없을 경우
	if (parent == NULL)
		return;

	// 오른쪽 자식 노드가 이미 존재하는 경우
	if (parent->pRightChild != NULL)
		return;

	parent->pRightChild = node;	
}


void initMorseCodeBinTree(BinTree *pTree)
{
	// 만약 이걸 메인함수에 선언할 경우 stack 영역에 저장되므로 {}를 벗어나는 순간 데이터가 다 날아간다.
	// 이것을 hip 영역에 저장하고 있으면 계속 꺼내 쓸 수 있다. (라고 적혀 있음)
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
	

	// 위에서 선언한 녀석들을 왼쪽, 오른쪽 노드에 넣는다.
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
	BinTree *pTree = NULL;  // 바이너리트리 형태의 p트리 선언
	pTree = (BinTree *)malloc(sizeof(BinTree));  // 바이너리트리는 루트노트 하나만 갖고 있다. 그 녀석의 타입에는 data, morse_code, Left, Right가 있다.
	if (pTree == NULL) {
		printf("오류, 메모리 할당\n");
		exit(-1);  
	}

	pTree->pRootNode = (BinTreeNode *)malloc(sizeof(BinTreeNode));	// p트리는 만들어졌고, 그 안에 루트노드가 있는데 루트노트를 만들어준다	
	if (pTree->pRootNode == NULL) {
		printf("오류, 메모리 할당\n");
		exit(-1);
	}

	pTree->pRootNode->data = ' ';  // 루트 노드에는 아무것도 들어있지 않다.
	strcpy(pTree->pRootNode->morse_code, "\0");
	pTree->pRootNode->pLeftChild = NULL;
	pTree->pRootNode->pRightChild = NULL;
	
	initMorseCodeBinTree(pTree);
	
	return pTree;
}

void assignNode(BinTreeNode* node, int is_right, const char* parent_morse)   // is_right: 오른쪽인지 여부를 0과 1로 확인
{
	if (node == NULL)
		return;
	
	// 모스 기호를 할당한다
	if (is_right == 0) // 이건 왼쪽이다	
	{ 
		strcpy(node->morse_code, parent_morse);
		strcat(node->morse_code, "●");  // 왼쪽일 경우 *을 추가한다. 
	} 
	
	else  // 이건 오른쪽이다
	{ 
		strcpy(node->morse_code, parent_morse);
		strcat(node->morse_code, "ㅡ");	// 오른쪽일 경우 -을 추가한다.
	}

	// 좌측 child에게 같은 일 반복
	assignNode(node->pLeftChild, 0, node->morse_code);

	// 우측 child에게 같은 일 반복
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