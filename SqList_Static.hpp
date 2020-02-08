//
//  SqList_Static.hpp
//  顺序表
//
//  Created by WuTao on 2020/1/23.
//  Copyright © 2020 WuTao. All rights reserved.
//

#ifndef SqList_Static_hpp
#define SqList_Static_hpp

#include <stdio.h>

#define maxSize 20
typedef struct
{
    int data[maxSize];
    int length;//表的当前长度
}SqList_static;//静态分配的

void initList(SqList_static &L);//表的初始化
#endif /* SqList_Static_hpp */
