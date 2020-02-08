//
//  SqList_Static.cpp
//  顺序表
//
//  Created by WuTao on 2020/1/23.
//  Copyright © 2020 WuTao. All rights reserved.
//

#include "SqList_Static.hpp"

void initList(SqList_static &L)//表的初始化
{
    for (int i = 0; i < maxSize; i++ )
    {
        L.data[i] = 0;//将顺序表数组的每个元素初始化
    }
    L.length = 0;
}


