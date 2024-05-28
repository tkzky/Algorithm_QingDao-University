#include <iostream>
#include "LinkStack.h"
using namespace std;

void InitStack(LinkStack &stack)
{
    stack = nullptr;
}

void DestroyStack(LinkStack &stack)
{
    StackNode *cur = stack;
    while (cur != nullptr)
    {
        StackNode *next = stack;
        delete cur;
        cur = next;
    }
    cur = nullptr;
}

bool StackEmpty(LinkStack stack)
{
    if (stack == nullptr)
        return true;
    return false;
}

int StackLength(LinkStack stack)
{
    int len = 0;
    StackNode *node = stack;
    while (node != nullptr)
    {
        len++;
        node = node->next;
    }
    return len;
}

bool GetTop(LinkStack stack, ElemType &elem)
{
    if (stack == nullptr)
        return false;
    elem = stack->data;
    return true;
}

void PushElem(LinkStack &stack, ElemType elem)
{
    StackNode *node = new StackNode();
    node->data = elem;
    node->next = stack;
    stack = node;
}

bool PopElem(LinkStack &stack, ElemType &elem)
{
    if (stack == nullptr)
        return false;
    
    elem = stack->data;
    StackNode *node = stack;
    stack = stack->next;
    delete node;
    node = nullptr;
}