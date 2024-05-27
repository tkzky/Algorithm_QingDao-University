#include <iostream>
#include "SqStack.h"
using namespace std;

int main()
{
    bool ret = false;
    SqStack stack;
    
    /* test InitStack */
    int size = 5;
    ret = InitStack(stack, size);
    if (ret == false)
    {
        cout << "Init stack failed" << endl;
        return -1;
    }

    /* test PushElem */
    for (int i = 0; i < size; i++)
    {
        int elem = i;
        if (!PushElem(stack, elem))
        {
            cout << "Push element failed" << endl;
            return -1;
        }
    }
    /* test push elem to full stack */
    if (!PushElem(stack, 6))
    {
        cout << "Test push elem to full stack successfully." << endl;
    }

    /* test StackLength */
    int len = StackLength(stack);
    cout << "Stack length is: " << len << endl;

    /* test GetTop and PopElem */
    for (int i = 0; i < len; i++)
    {
        int elem = 0;
        if (!GetTop(stack, elem))
        {
            cout << "GetTop faild" << endl;
            return -1;
        }
        cout << "Top is: " << elem << endl;

        elem = 0;
        if (!PopElem(stack, elem))
        {
            cout << "PopElem failed" << endl;
            return -1;
        }
        cout << "Pop element is: " << elem << endl;
    }

    /* test pop empty stack */
    int elem = 0;
    if (!PopElem(stack, elem))
    {
        cout << "Test pop empty stack successfully." << endl;
    }

    /* test ClearStack */
    PushElem(stack, 6);
    ClearStack(stack);
    cout << "Clear stack, stack length is " << StackLength(stack) << endl;

    /* test StackEmpty*/
    if (StackEmpty(stack))
    {
        cout << "Test StackEmpty successfully" << endl;
    }

    DestroyStack(stack);
}