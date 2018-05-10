#ifndef _BIN_MORSE_CODE_
#define _BIN_MORSE_CODE_

#include "bintree.h"

BinTreeNode* makeMorseNode(char key);
void insertLeftChildMorseNode(BinTreeNode* parent, BinTreeNode* node);
void insertRightChildMorseNode(BinTreeNode* parent, BinTreeNode* node);
void initMorseCodeBinTree(BinTree *pTree);
BinTree* createMorseCodeBinTree();

void assignNode(BinTreeNode* node, int is_right, const char* parent_morse);
void assignMorseCode(BinTree* morseCodeTree);

void display(BinTreeNode *pTreeNode, int level, char type);
void traverseMorseCodeBinTree(BinTree* morseCodeTree);

#endif