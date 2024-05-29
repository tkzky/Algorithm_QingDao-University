#include "SqQueue.h"

bool InitQueue(SqQueue &queue)
{
    queue.data = new ElemType[MAXQSIZE];
    if (queue.data == nullptr)
        return false;

    queue.front = 0;
    queue.tail = 0;
    return true;
}

void DestoryQueue(SqQueue &queue)
{
    delete[] queue.data;
    queue.data = nullptr;
    queue.front = 0;
    queue.tail = 0;
}

void ClearQueue(SqQueue &queue)
{
    queue.front = 0;
    queue.tail = 0;
}

int QueueLength(SqQueue &queue)
{
    return ((queue.tail - queue.front + MAXQSIZE) % MAXQSIZE);
}

bool GetHead(SqQueue &queue, ElemType &elem)
{
    /* queue is empty */
    if (queue.front == queue.tail)
        return false;
    
    elem = queue.data[queue.front];
    return true;
}

bool EnQueue(SqQueue &queue, ElemType elem)
{
    /* queue is full */
    if ((queue.tail + 1) % MAXQSIZE == queue.front)
        return false;
    
    queue.data[queue.tail] = elem;
    queue.tail = (queue.tail + 1) % MAXQSIZE;
    return true;
}

bool DeQueue(SqQueue &queue, ElemType &elem)
{
    /* queue is empty */
    if (queue.front == queue.tail)
        return false;
    
    elem = queue.data[queue.front];
    queue.front = (queue.front + 1) % MAXQSIZE;
    return true;
}