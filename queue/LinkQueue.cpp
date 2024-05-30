#include "LinkQueue.h"

bool InitQueue(LinkQueue &queue)
{
    queue.front = queue.tail = new QNode();
    if (!queue.front)
        return false;
    return true;
}

void DestoryQueue(LinkQueue &queue)
{
    while(queue.front)
    {
        QNodePtr p = queue.front->next;
        delete queue.front;
        queue.front = p;
    }
}

bool GetHead(LinkQueue &queue, ElemType &elem)
{
    /* Queue is empty */
    if (queue.front == queue.tail)
        return false;
    
    elem = queue.front->next->data;
    return true;
}

bool EnQueue(LinkQueue &queue, ElemType elem)
{
    QNode *node = new QNode();
    if (!node)
        return false;
    node->data = elem;
    node->next = nullptr;

    queue.tail->next = node;
    queue.tail = node;
    return true;
}

bool DeQueue(LinkQueue &queue, ElemType &elem)
{
    /* Queue is empty */
    if (queue.front == queue.tail)
        return false;

    QNode* node = queue.front->next;
    queue.front->next = node->next;
    elem = node->data;
    /* If queue is only one elem, tail should equal front */
    if (queue.tail == node)
        queue.tail = queue.front;
    delete node;
    return true;
}