//
// Created by Kazamine_Setueka on 2021/12/1.
//

#include "../Weed14_H_Test/ArrayHash.h"
#include "../Weed14_H_Test/Hash.h"

void InitHash(ArrayHash &HT)
{
    for (int i = 0; i < MAXSIZE; i++)
        HT.data[i] = NULLFLAG; //初始化空标志
    HT.n = 0;
}

//查找（同时支持删除的前期查找工作）
//查找成功返回item的位置，查找失败返回-1
int HashSearch(ArrayHash &HT, ElemType item)
{
    if (HT.n <= 0)
        return -1; //表空，查找失败

    int hashaddress = Hash(item); //计算哈希地址
    int pos = hashaddress;
    int i = 0;//记录查找次数
    //在当前位置pos非空 且 pos位置上元素不是待查元素 而且 查找次数小于表长的情况下探查下一个地址
    while (HT.data[pos] != NULLFLAG && HT.data[pos] != item && i < MAXSIZE)
    {
        pos = Collision(pos);//处理冲突
        i++;
    }
    if (HT.data[pos] == item)
        return pos;  //查找成功
    else
        return -1; //查找失败
}

bool HashInsert(ArrayHash &HT, ElemType item)
{
    if (HT.n >= MAXSIZE)
        return false; //表满，插入失败

    int hashaddress = Hash(item); //计算哈希地址
    int pos = hashaddress;
    int i = 0;//记录查找次数
    int deleted_pos = -1; //已删除的位置，初值为-1
    while (HT.data[pos] != NULLFLAG && HT.data[pos] != item && i < MAXSIZE)
    {
        if (HT.data[pos] == DELETEFLAG && deleted_pos == -1)
            deleted_pos = pos;//记录下遇到的第一个删除标记的位置
        pos = Collision(pos);//处理冲突
        i++;
    }
    if (HT.data[pos] == item)
        return false;  //item已存在，不必插入
    if (deleted_pos != -1)
        pos = deleted_pos; //如果在查找时遇到过删除标记，则找不到时的插入位置为第一个删除标记的位置
    //如果在查找时没有遇到过删除标记，则找不到时的插入位置为空标记的位置

    HT.data[pos] = item; //在空标记或第一个删除标记的位置上插入item
    HT.n++; //记录个数增1
    return true;
}

bool HashDelete(ArrayHash &HT, ElemType item)
{
    int pos = HashSearch(HT, item);//在哈希表中查找item
    if (pos < 0)
        return false; //item不存在，删除失败

    HT.data[pos] = DELETEFLAG;//找到，则设置删除标志
    HT.n--; //记录个数减1
    return true;//删除成功
}

bool TraverseHash(ArrayHash &HT)
{
    if (HT.n <= 0)
        return false; //表空，遍历失败

    for (int i = 0; i < MAXSIZE; i++)
        cout << i << "\t";
    cout << endl;
    for (int i = 0; i < MAXSIZE; i++)
        cout << HT.data[i] << "\t";
    cout << endl;

    return true;
}
