#include <iostream>
using namespace std;

typedef int ElemType;

typedef struct {
    ElemType *base;
    ElemType *top;
    int stack_size;
}SqStack;

bool InitStack(SqStack &stack, int size);
void DestroyStack(SqStack &stack);
bool StackEmpty(SqStack stack);
int StackLength(SqStack stack);
bool GetTop(SqStack stack, ElemType &elem);
void ClearStack(SqStack &stack);
bool PushElem(SqStack &stack, ElemType elem);
bool PopElem(SqStack &stack, ElemType &elem);