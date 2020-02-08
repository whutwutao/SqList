//
//  SqList_Dynamic.hpp
//  顺序表
//
//  Created by WuTao on 2020/1/23.
//  Copyright © 2020 WuTao. All rights reserved.
//

#ifndef SqList_Dynamic_hpp
#define SqList_Dynamic_hpp

#include <stdio.h>
#include <stdlib.h>
#define initSize 10

typedef struct
{
    int *data;
    int MaxSize;//表的最大长度
    int length;//表的当前长度
}SqList_dynamic;//动态分配的

void initList(SqList_dynamic &L);//表的初始化
void destroyList(SqList_dynamic &L);//表的销毁
void increaseSize(SqList_dynamic &L, int len);//表的最大长度的增加
bool isEmpty(SqList_dynamic &L);//判空
bool listInsert(SqList_dynamic &L, int i, int e);//在位置为i处插入e
bool listDelete(SqList_dynamic &L, int i, int &e);//删除位置为i处的元素，并将其值传给e
bool getElem(SqList_dynamic &L, int i, int &e);//按位查找
bool locateElem(SqList_dynamic &L, int e, int &i);//按值查找
#endif /* SqList_Dynamic_hpp */
