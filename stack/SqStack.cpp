#include"SqStack.h"

bool InitStack(SqStack &stack, int size)
{
    stack.base = new ElemType[size];
    if (stack.base == nullptr)
    {
        return false;
    }
    stack.top = stack.base;
    stack.stack_size = size;
    return true;
}

void DestroyStack(SqStack &stack)
{
    delete[] stack.base;
}

bool StackEmpty(SqStack stack)
{
    return (stack.base == stack.top);
}

int StackLength(SqStack stack)
{
    return (stack.top - stack.base);
}

bool GetTop(SqStack stack, ElemType &elem)
{
    if (StackEmpty(stack))
    {
        return false;
    }
    elem = *(stack.top - 1);
    return true;
}

void ClearStack(SqStack &stack)
{
    stack.top = stack.base;
}

bool PushElem(SqStack &stack, ElemType elem)
{
    if ((stack.top - stack.base) == stack.stack_size)
    {
        return false;
    }
    *stack.top = elem;
    stack.top++;
    return true;
}

bool PopElem(SqStack &stack, ElemType &elem)
{
    if (StackEmpty(stack))
    {
        return false;
    }
    stack.top--;
    elem = *stack.top;

    return true;
}