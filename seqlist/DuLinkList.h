#include <iostream>

typedef int ElemType;

typedef struct DuLNode
{
    ElemType data;
    DuLNode *pre, *next;
} DuLNode, *DuLinkList;

bool InitList(DuLinkList &l);
int ListLength(DuLinkList &l);
bool ListInsert(DuLinkList &l, int i, ElemType e);
bool ListDelete(DuLinkList &l, int i, ElemType &e);   /* delete the ith elem */
void PrintList(DuLinkList &l);