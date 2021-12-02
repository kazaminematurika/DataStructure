//
// Created by Kazamine_Setueka on 2021/12/1.
//

#ifndef CLIONGONGZUODIAN_LINKHASH_H
#define CLIONGONGZUODIAN_LINKHASH_H

#endif //CLIONGONGZUODIAN_LINKHASH_H
#include "../Weed14_H_Test/Hash.h"
struct Node  //Node为结点类型名
{
    ElemType 	data;   //data代表数据元素
    Node	    *next;  //next为指向下一结点的指针
};

//哈希表类型（LinkHash表示具有MAXSIZE个元素的Node*型数组类型，即LinkHash是一个指针数组的类型名）
typedef Node* LinkHash[MAXSIZE];

//初始化
void InitHash(LinkHash &HT);

//查找
Node* HashSearch(LinkHash &HT, ElemType item);

//插入
bool HashInsert(LinkHash &HT, ElemType item);

//删除
bool HashDelete(LinkHash &HT, ElemType item);

//清除哈希表中的所有元素
void ClearHash(LinkHash &HT);