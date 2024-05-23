#include "LinkList.h"

bool InitList(LinkList &L)
{
    L = new ListNode;
    if (nullptr == L)
        return false;
    
    L->next = nullptr;
    return true;
}

bool CreateListHead(LinkList &L, int n)
{
    for (int i = 0; i < n; i++)
    {
        ListNode *new_node = new ListNode;
        if (nullptr == new_node)
            return false;
        std::cin >> new_node->data;
        new_node->next = L->next;
        L->next = new_node;
    }
    return true;
}

bool CreateListTail(LinkList &L, int n)
{
    ListNode *tail = L;
    for (int i = 0; i < n; i++)
    {
        ListNode *new_node = new ListNode;
        if (nullptr == new_node)
            return false;
        std::cin >> new_node->data;
        new_node = nullptr;
        tail->next = new_node;
        tail = new_node;
    }
    return true;
}

/* if the list is empty, return 1 */
int ListEmpty(const LinkList &L)
{
    if (L->next == nullptr)
        return 1;
    return 0;
}

bool DestoryList(LinkList &L)
{
    while (nullptr != L)
    {
        ListNode *cur = L;
        L = L->next;
        delete cur;
    }
    return true;
}

void ClearList(LinkList &L)
{
    ListNode *cur = L->next;
    while (cur != nullptr)
    {
        ListNode *next = cur->next;
        delete cur;
        cur = next;
    }
    L->data = 0;
    L->next = nullptr;
}

int ListLength(const LinkList &L)
{
    int ret = 0;
    ListNode *cur = L->next;
    while (cur != nullptr)
    {
        ret++;
        cur = cur->next;
    }
    return ret;
}

bool GetElem(const LinkList &L, int i, ElemType &e)
{
    if (i <= 0 || i > ListLength(L))
    {
        return false;
    }

    ListNode *cur = L;
    for (int j = 0; j < i; j++)
    {
        cur = cur->next;
    }
    e = cur->data;
    return true;
}

size_t LocateElem(const LinkList &L, ElemType e)
{
    size_t ret = 1;
    ListNode *cur = L->next;
    while(cur != nullptr)
    {
        if (cur->data == e)
            return ret;
        cur = cur->next;
        ++ret;
    }
    return 0;
}

/* Insert elem before ith, i = 1, 2 ...*/
bool ListInsert(LinkList &L, int i, ElemType e)
{
    if (i < 1 || i > ListLength(L) + 1)
        return false;
    
    ListNode *cur = new ListNode;
    cur->data = e;
    cur->next = nullptr;

    ListNode *pre = L;
    i--;
    for (int j = 0; j < i; j++)
    {
        pre = pre->next;
    }
    cur->next = pre->next;
    pre->next = cur;
    return true;
}

bool ListDelete(LinkList &L, int i, ElemType &e)   /* delete the ith elem */
{
    if (i < 1 || i > ListLength(L))
        return false;
    
    ListNode *pre = L;
    i--;
    for (int j = 0; j < i; j++)
    {
        pre = pre->next;
    }
    ListNode *cur = pre->next;
    pre->next = pre->next->next;
    delete cur;
    return true;
}
