#include <iostream>
using namespace std;

typedef int ElemType;

typedef struct StackNode {
    ElemType data;
    StackNode *next;
}StackNode, *LinkStack;

void InitStack(LinkStack &stack);
void DestroyStack(LinkStack &stack);
bool StackEmpty(LinkStack stack);
int StackLength(LinkStack stack);
bool GetTop(LinkStack stack, ElemType &elem);
void PushElem(LinkStack &stack, ElemType elem);
bool PopElem(LinkStack &stack, ElemType &elem);