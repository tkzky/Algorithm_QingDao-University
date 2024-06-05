#include <iostream>

typedef char ElemType;

typedef struct BiNode {
    ElemType data;
    BiNode *lchild, *rchild;
}BiNode, *BiTree;

void PreOrderTraverse(BiTree tree);
void InOrderTraverse(BiTree tree);
void PostOrderTraverse(BiTree tree);