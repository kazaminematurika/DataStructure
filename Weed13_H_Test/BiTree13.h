////
//// Created by Kazamine_Setueka on 2021/11/24.
////
//
//#ifndef CLIONGONGZUODIAN_BITREE13_H
//#define CLIONGONGZUODIAN_BITREE13_H
//
//#endif //CLIONGONGZUODIAN_BITREE13_H
//#include <iostream>
//using namespace std;
//
//typedef int ElemType;
//
//typedef struct node {
//    ElemType data; //数据域
//    struct node *left;
//    struct node *right; //结点的左右子树指针
//} BTNode; //二叉树结点类型
//
////初始化空二叉树
//void TreeInit(BTNode *&root);
//
////从二叉排序树中查找元素item，返回item所在结点的地址
//BTNode *BSTSearch(BTNode *root, ElemType item);
//
////向二叉排序树中插入item
//bool BSTInsert(BTNode *&root, ElemType item);
//
////删除二叉排序树中与指定的数据相同的结点
//bool BSTDelete(BTNode *&root, ElemType item);
//
////中序遍历二叉树
//void InOrder(BTNode *root);
//
////释放二叉树中所有结点
//void ClearBTree(BTNode *&root);
//
////使用递归算法创建二叉排序树
//bool BSTInsertRecursion(BTNode *&root, ElemType item);