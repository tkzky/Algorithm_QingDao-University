#include <iostream>
using namespace std;

typedef int ElemType;

typedef struct QNode {
    ElemType data;
    QNode* next;
}QNode, *QNodePtr;

typedef struct LinkQueue {
    QNodePtr front;
    QNodePtr tail;
}LinkQueue;

bool InitQueue(LinkQueue &queue);
void DestoryQueue(LinkQueue &queue);
bool GetHead(LinkQueue &queue, ElemType &elem);
bool EnQueue(LinkQueue &queue, ElemType elem);
bool DeQueue(LinkQueue &queue, ElemType &elem);