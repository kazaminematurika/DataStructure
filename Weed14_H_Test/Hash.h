//
// Created by Kazamine_Setueka on 2021/12/1.
//

#ifndef CLIONGONGZUODIAN_HASH_H
#define CLIONGONGZUODIAN_HASH_H

#endif //CLIONGONGZUODIAN_HASH_H
#include <iostream>
using namespace std;

#define MAXSIZE    11 //哈希表最大长度
#define NULLFLAG   -1 //空标志
#define DELETEFLAG -2 //删除标志
#define M          MAXSIZE   // 用作除数的M值应<=哈希表最大长度，这里取值为哈希表最大长度
typedef int ElemType;

//哈希函数
int Hash(int key);

//开放定址法处理冲突
int Collision(int address);