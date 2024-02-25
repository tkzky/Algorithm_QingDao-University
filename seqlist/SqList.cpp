#include "SqList.h"

int InitList(SqList &l)
{
    l.elem = new ElemType[MAXLENGTH];
    if (nullptr == l.elem)
        return -1;
    l.length = 0;
    return 0;
}

void DestoryList(SqList &l)
{
    if (l.elem)
        delete[] l.elem;
}

void ClearList(SqList &l)
{
    l.length = 0;
}

int ListInsert(SqList &l, int i, ElemType e)
{
    /* i should belong to [1, l.length + 1] */
    if (i < 1 || i > l.length + 1)
        return -1;
    /* sqlist isn't full */
    if (l.length >= MAXLENGTH)
        return -1;

    for (int j = l.length - 1; j >= i - 1; j--)
    {
        l.elem[j + 1] = l.elem[j];
    }
    l.elem[i - 1] = e;
    l.length++;
    return 0;
}

int ListDelete(SqList &l, int i, ElemType &e)
{
    if (i < 1 || i > l.length)
        return -1;
    e = l.elem[i - 1];
    for (int j = i; j < l.length; j++)
    {
        l.elem[j - 1] = l.elem[j];
    }
    l.length--;
    return 0;
}

bool IsEmpty(const SqList &l)
{
    if (0 == l.length)
        return true;
    return false;
}

int ListLength(const SqList &l)
{
    return l.length;
}

int LocateElem(const SqList &l, ElemType e)
{
    int i = 0;
    for(; i < l.length; i++)
    {
        if (l.elem[i] == e)
        {
            return (i + 1);
        }
    }
    return -1;
}

bool GetElem(const SqList &l, int i, ElemType &e)
{
    if (i < 1 || i > l.length)
        return false;
    
    e = l.elem[i - 1];
    return true;
}