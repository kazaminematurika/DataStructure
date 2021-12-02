//
// Created by Kazamine_Setueka on 2021/12/1.
//

#include "../Weed14_H_Test/LinkHash.h"
#include "../Weed14_H_Test/Hash.h"

//初始化
void InitHash(LinkHash &HT)
{
    for (int i = 0; i < MAXSIZE; i++)
    {
        Node *t = new Node;
        t->data = 0; //保存同义词链表的长度
        t->next = NULL;
        HT[i] = t;//初始化空头结点
    }
}

//查找
Node* HashSearch(LinkHash &HT, ElemType item)
{
    int hashaddress = Hash(item);//计算哈希地址
    Node *p = HT[hashaddress]->next;//取得同义词单链表的第一个结点地址
    while (p != NULL && p->data != item)
        p = p->next;
    if (p != NULL)
        return p;  //查找成功
    else
        return NULL; //查找失败
}

//插入
bool HashInsert(LinkHash &HT, ElemType item)
{
    Node *p = HashSearch(HT, item); //在哈希表中查找item

    if (p != NULL) return false; //找到，则不必插入item

    int hashaddress = Hash(item);//计算哈希地址
    Node  *t = new Node;//没找到，则插入item
    t->data = item;
    t->next = HT[hashaddress]->next;//将新节点插入到第hashaddress个链表的头部
    HT[hashaddress]->next = t;
    HT[hashaddress]->data++;
    return true;
}

//删除
bool HashDelete(LinkHash &HT, ElemType item)
{
    int hashaddress = Hash(item);//计算哈希地址
    Node *q = HT[hashaddress];//取得同义词单链表的表头指针
    Node *p = q->next; //q保存p的前驱
    while (p != NULL && p->data != item)
    {
        q = p;
        p = p->next;
    }

    if (p == NULL)
        return false; //删除失败

    q->next = p->next;
    delete p;
    HT[hashaddress]->data--;
    return true; //删除成功

}

//清除哈希表中的所有元素
void ClearHash(LinkHash &HT)
{
    Node *p;
    //清除各个节点链表的点
    for (int i = 0; i < MAXSIZE; i++)
    {
        //清除第i个哈希地址链表的所有结点
        while (HT[i] != NULL)
        {
            p = HT[i];
            HT[i] = HT[i]->next;
            delete p;
        }
    }
}
