#include <iostream>

typedef int ElemType;

typedef struct
{
    ElemType data;
    ListNode *next;
}ListNode, *LinkList;


bool InitList(LinkList &L);
bool CreateListHead(LinkList &L, int n);
bool CreateListTail(LinkList &L, int n);
int ListEmpty(const LinkList &L);  /* if the list is empty, return 1 */
bool DestoryList(LinkList &L);
void ClearList(LinkList &L);
int ListLength(const LinkList &L);
bool GetElem(const LinkList &L, int i, ElemType &e);
size_t LocateElem(const LinkList &L, ElemType e);
bool ListInsert(LinkList &L, int i, ElemType e);    /* Insert elem before ith, i = 1, 2 ...*/
bool ListDelete(LinkList &L, int i, ElemType &e);   /* delete the ith elem */