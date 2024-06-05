#include <iostream>
#include "BiTree.h"
using namespace std;

int main()
{
    BiTree root = new BiNode();
    root->data = 'A';

    BiNode *node1 = new BiNode();
    node1->data = 'B';

    BiNode *node2 = new BiNode();
    node2->data = 'C';

    BiNode *node3 = new BiNode();
    node3->data = 'D';

    root->lchild = node1;
    root->rchild = node2;
    node1->rchild = node3;

    PreOrderTraverse(root);
    cout << endl;

    InOrderTraverse(root);
    cout << endl;

    PostOrderTraverse(root);
    cout << endl;
    
    return 0;
}