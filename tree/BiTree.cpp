#include <iostream>
#include "BiTree.h"
using namespace std;

void PreOrderTraverse(BiTree tree)
{
    if (tree == nullptr)
        return;
    
    cout << tree->data << " ";
    PreOrderTraverse(tree->lchild);
    PreOrderTraverse(tree->rchild);
}

void InOrderTraverse(BiTree tree)
{
    if (tree == nullptr)
        return;
    
    InOrderTraverse(tree->lchild);
    cout << tree->data << " ";
    InOrderTraverse(tree->rchild); 
}

void PostOrderTraverse(BiTree tree)
{
    if (tree == nullptr)
        return;
    
    PostOrderTraverse(tree->lchild);
    PostOrderTraverse(tree->rchild);
    cout << tree->data << " ";
}