//
//  SqList_Dynamic.cpp
//  顺序表
//
//  Created by WuTao on 2020/1/23.
//  Copyright © 2020 WuTao. All rights reserved.
//

#include "SqList_Dynamic.hpp"

void initList(SqList_dynamic &L)
{
    L.data = (int *)malloc(sizeof(int)*initSize);
    L.length = 0;
    L.MaxSize = initSize;
}

void destroyList(SqList_dynamic &L)
{
    if (L.data != NULL)
    {
        free(L.data);
    }
}
void increaseSize(SqList_dynamic &L, int len)
{
    int *p = L.data;
    //C语言的动态空间分配
    //一般malloc和free成对出现
    L.data = (int *)malloc(sizeof(int)*(L.MaxSize + len));//开辟新的存储空间
    for (int i = 0; i < L.length; i ++)
    {
        L.data[i] = p[i];//将原数组中的元素复制到新的数组中
    }
    L.MaxSize += len;//更改最大表长
    free(p);//将原数组空间释放掉
    
    //C++的动态空间分配
//    L.data = new int[L.MaxSize + len];
//    for (int i = 0; i < L.length; i ++)
//    {
//        L.data[i] = p[i];//将原数组中的元素复制到新的数组中
//    }
//    L.MaxSize += len;
//    delete []p;//将原数组空间释放掉
}

bool isEmpty(SqList_dynamic &L)
{
    if (L.length == 0)
    {
        return true;
    }
    return false;
}

bool listInsert(SqList_dynamic &L, int i, int e)
{
    if (i < 1 || i > L.length + 1)//位置不合法
    {
        return false;
    }
    if (i > L.MaxSize)//表已满
    {
        return false;
    }
    for (int j = L.length; j >= i; j --)//位置i后的元素往后移，从表尾开始移
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;//插入e
    L.length ++;//长度加1
    return true;
}


bool listDelete(SqList_dynamic &L, int i, int &e)
{
    if (i < 1 || i > L.length)
    {
        return false;
    }
    e = L.data[i];
    for (int j = i; j < L.length; j ++)
    {
        L.data[j - 1] = L.data[j];
    }
    L.length --;
    return true;
}

bool getElem(SqList_dynamic &L, int i, int &e)
{
    if (i < 1 || i > L.length)
    {
        return false;
    }
    e = L.data[i - 1];//记得数组下标和表的位序的关系
    return true;
}

bool locateElem(SqList_dynamic &L, int e, int &i)
{
    bool ret = false;
    for (int j = 0; j < L.length; j ++)
    {
        if (L.data[j] == e)
        {
            i = j + 1;//记得数组下标和表的位序的关系
            ret = true;
            break;
        }
    }
    return ret;
}
