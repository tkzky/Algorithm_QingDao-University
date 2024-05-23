#include <iostream>
#include "DuLinkList.h"
using namespace std;

int main()
{
    bool res = false;
    DuLinkList list;
    
    res = InitList(list);
    if (res == false)
    {
        cout << "InitList failed." << endl;
        return 0;
    }

    ListInsert(list, 1, 1);
    ListInsert(list, 2, 2);
    ListInsert(list, 3, 3);
    ListInsert(list, 4, 4);
    ListInsert(list, 5, 5);
    ListInsert(list, 6, 6);

    int length = ListLength(list);
    cout << "List length is " << length << endl;
    PrintList(list);
    
    int elem = 0;
    ListDelete(list, 2, elem);
    length = ListLength(list);
    cout << "List length is " << length << endl;
    PrintList(list);
    
    return 0;
}