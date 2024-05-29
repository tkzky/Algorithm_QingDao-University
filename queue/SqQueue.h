#include <iostream>
using namespace std;

typedef int ElemType;
#define MAXQSIZE 5

typedef struct {
    ElemType *data;
    int front;
    int tail;
}SqQueue;

bool InitQueue(SqQueue &queue);
void DestoryQueue(SqQueue &queue);
void ClearQueue(SqQueue &queue);
int QueueLength(SqQueue &queue);
bool GetHead(SqQueue &queue, ElemType &elem);
bool EnQueue(SqQueue &queue, ElemType elem);
bool DeQueue(SqQueue &queue, ElemType &elem);