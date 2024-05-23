#include "DuLinkList.h"

bool InitList(DuLinkList &l)
{
    l = new DuLNode;
    if (nullptr == l)
        return false;

    l->data = 0;
    l->next = nullptr;
    l->pre = nullptr;
    return true;
}

int ListLength(DuLinkList &l)
{
    int length = 0;
    DuLNode *cur = l->next;
    while (cur != nullptr)
    {
        length++;
        cur = cur->next;
    }
    
    return length;
}

/*
 * Insert elem at ith, i = 1, 2 ...
*/
bool ListInsert(DuLinkList &l, int i, ElemType e)
{
    if (i < 1 || i > ListLength(l) + 1)
        return false;
    
    DuLNode *cur = l;
    DuLNode *node = new DuLNode;
    node->data = e;

    // Find (i - 1) th node, i == 0 is dummy_head.
    i--;
    for (int j = 0; j < i; j++)
        cur = cur->next;
    node->next = cur->next;
    node->pre = cur;
    if (cur->next != nullptr)
        cur->next->pre = node;
    cur->next = node;

    return true;
}

/*
 * Delete the ith elem.
*/
bool ListDelete(DuLinkList &l, int i, ElemType &e)
{
    if (i < 1 || i > ListLength(l))
        return false;
    
    DuLNode *node = l;
    for (int j = 0; j < i; j++)
        node = node->next;
    node->pre->next = node->next;
    node->next->pre = node->pre;
    e = node->data;
    delete node;

    return true;
}

void PrintList(DuLinkList &l)
{
    int length = ListLength(l);
    DuLNode *node = l->next;
    for (int i = 0; i < length; i++)
    {
        std::cout << node->data << std::endl;
        node = node->next;
    }
}