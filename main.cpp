#include "SqList_Static.hpp"
#include "SqList_Dynamic.hpp"
#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{
    SqList_dynamic list;
    initList(list);
    listInsert(list,1,1);
    listInsert(list,2,2);
    listInsert(list,2,3);
    for (int i = 1; i <= list.length; i ++)
    {
        int temp = 0;
        if (getElem(list,i,temp))
        {
            cout << temp << endl;
        }
    }
    int location = 0;
    if (locateElem(list,3,location))
    {
        cout << location << endl;
    }
    return 0;
}
