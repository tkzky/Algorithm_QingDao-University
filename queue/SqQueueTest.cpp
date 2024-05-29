#include <iostream>
#include "SqQueue.h"
using namespace std;

int main()
{
    SqQueue queue;
    bool ret = InitQueue(queue);
    if (ret == false)
        cout << "InitQueue failed" << endl;
    
    for (int i = 0; i < MAXQSIZE; i++)
    {
        if (!EnQueue(queue, i))
            cout << "EnQueue failed" << endl;
        cout << "Queue length is " << QueueLength(queue) << endl;
    }

    /* test EnQueue when queue is full */
    if (!EnQueue(queue, 5))
        cout << "test EnQueue when queue is full" << endl;
    
    /* test GetHead */
    ElemType elem;
    GetHead(queue, elem);
    cout << "GetHead elem " << elem << endl;

    /* test DeQueue and EnQueue */
    DeQueue(queue, elem);
    cout << "DeQueue elem is " << elem << endl;
    cout << "Queue length is " << QueueLength(queue) << endl;
    if (!EnQueue(queue, 5))
        cout << "EnQueue failed" << endl;

    int len = QueueLength(queue);
    for (int i = 0; i < len; i++)
    {
        ElemType e;
        DeQueue(queue, e);
        cout << "DeQueue elem: " << e << endl;
    }

    return 0;
}