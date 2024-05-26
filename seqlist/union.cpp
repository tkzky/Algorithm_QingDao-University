/*
 * union.cpp
 * L_a = (7, 5, 3, 11)   L_b = (2, 6, 3)
 * L_a union L_b = (7, 5, 3, 11, 2, 6)
*/

#include <iostream>
#include "LinkList.h"
using namespace std;

int main()
{
    int num_a = 0;
    int num_b = 0;
    LinkList list_a = new ListNode();
    LinkList list_b = new ListNode();

    cout << "List_a's elem nums: " << endl;
    cin >> num_a;
    CreateListTail(list_a, num_a);
    cout << "List_b's elem nums: " << endl;
    cin >> num_b;
    CreateListTail(list_b, num_b);

    int length_a = ListLength(list_a);
    int length_b = ListLength(list_b);
    for (int i = 1; i <= length_b; i++)
    {
        int elem = 0;
        GetElem(list_b, i, elem);
        if (LocateElem(list_a, elem) == 0)
        {
            ListInsert(list_a, ++length_a, elem);
        }
    }

    for (int i = 1; i <= length_a; i++)
    {
        int elem = 0;
        GetElem(list_a, i, elem);
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}