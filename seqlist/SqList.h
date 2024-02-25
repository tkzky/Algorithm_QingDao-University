#include <iostream>

typedef int ElemType;
#define MAXLENGTH 512

typedef struct {
    ElemType *elem;
    int      length;
} SqList;

int InitList(SqList &l);
void DestoryList(SqList &l);
void ClearList(SqList &l);
int ListInsert(SqList &l, int i, ElemType e);
int ListDelete(SqList &l, int i, ElemType &e);
bool IsEmpty(const SqList &l);
int ListLength(const SqList &l);
int LocateElem(const SqList &l, ElemType e);
bool GetElem(const SqList &l, int i, ElemType &e);