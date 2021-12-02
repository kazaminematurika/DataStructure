//
// Created by Kazamine_Setueka on 2021/12/1.
//

#include "../Weed14_H_Test/Hash.h"

//哈希函数
int Hash(int key)
{
    return key % M;//对M除留余数
}

//开放定址法处理冲突
int Collision(int address)
{
    return (address + 1) % MAXSIZE;//线性探查
}
