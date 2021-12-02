//
// Created by Kazamine_Setueka on 2021/12/1.
//

#ifndef CLIONGONGZUODIAN_ARRAYHASH_H
#define CLIONGONGZUODIAN_ARRAYHASH_H

#endif //CLIONGONGZUODIAN_ARRAYHASH_H
#include "../Weed14_H_Test/Hash.h"
//哈希表类型（ArrayHash表示具有MAXSIZE个元素的ElemType型数组类型）
typedef struct {
    ElemType data[MAXSIZE];
    int n; //哈希表中的元素个数
} ArrayHash;

//初始化
void InitHash(ArrayHash &HT); //n表示哈希表中记录的总数

//查找（同时支持删除的前期查找工作）
int HashSearch(ArrayHash &HT, ElemType item);

//插入
bool HashInsert(ArrayHash &HT, ElemType item);

//删除
bool HashDelete(ArrayHash &HT, ElemType item);

//遍历
bool TraverseHash(ArrayHash &HT);