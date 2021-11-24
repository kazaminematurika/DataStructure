//
// Created by Kazamine_Setueka on 2021/11/24.
//

#include "../Weed13_H_Test/BiTree13.h"

//初始化空二叉树
void TreeInit(BTNode *&root)
{
    root = NULL;
}

//从二叉排序树中查找元素item，返回item所在结点的地址
BTNode *BSTSearch(BTNode *root, ElemType item)
{
    BTNode *p = root;
    if (root == NULL)
        return NULL; //空树查找失败

    cout << "开始查找" << item << endl;
    while (p) {
        cout << p->data << "->";
        if (item == p->data) {
            cout << "查找成功" << endl;
            return p;
        }
        else if (item < p->data)
            p = p->left;
        else
            p = p->right;
    }
    cout << "查找失败" << endl;
    return NULL;
}

//向二叉排序树中插入item
bool BSTInsert(BTNode *&root, ElemType item)
{
    BTNode *p = root, *q = NULL; //q指向p的父结点
    while (p != NULL) {
        if (item == p->data)
            return false; //item已存在不必插入
        q = p; //把当前位置p保存到q，之后向下一层进发
        if (item < p->data)
            p = p->left; //在左子树中查找
        else
            p = p->right; //在右子树中查找
    }
    //查找失败，则进行插入操作
    p = new BTNode;
    p->data = item;
    p->left = NULL;
    p->right = NULL;

    if (root == NULL) //空树，item成为根
    {
        root = p;
        return true;
    }
    if (item < q->data)
        q->left = p; //item作为叶子q的左孩子
    else
        q->right = p; //item作为叶子q的右孩子

    return true; //插入成功
}

//使用递归算法创建二叉排序树
bool BSTInsertRecursion(BTNode *&root, ElemType item){
    if(root == NULL){
        //空二叉树,使得item为根
        root = new BTNode;
        root->data = item;
        root->left = NULL;
        root->right = NULL;
        return true;
    } else if(item == root->data){
        //存在相同的节点数值无需插入
        return false;
    } else if(item < root->data){
        return BSTInsertRecursion(root->left, item);
    } else{
        return BSTInsertRecursion(root->right, item);
    }
}

//删除二叉排序树中与指定的数据相同的结点
bool BSTDelete(BTNode *&root, ElemType item)
{
    BTNode *p = root, *q = NULL; //q指向p的父结点

    //查找与item相等的结点p
    while (p != NULL) {
        if (item == p->data)
            break; //找到需要删除的结点
        q = p;
        if (item < p->data)
            p = p->left; //在左子树中查找
        else
            p = p->right; //在右子树中查找
    }

    //与item相同的结点不存在
    if (p == NULL) {
        cout << "删除失败" << endl;
        return false; //树中找不到item，删除失败
    }

    //p指向找到的item结点，进行删除，需要调整二叉树
    //p是叶子结点
    if (p->left == NULL && p->right == NULL) {
        //q是p的父结点
        if (p == root) //删除结点为树根
            root = NULL;
        else if (q->left == p) //p是其父结点的左子结点
            q->left = NULL;
        else
            q->right = NULL;
    }
        //p是单分支结点
    else if (p->left == NULL || p->right == NULL) {
        BTNode *subtree; //指向p的子树

        if (p->left == NULL)
            subtree = p->right;
        else
            subtree = p->left;

        if (p == root) //删除结点为树根
            root = subtree;
        else if (q->left == p) //p是其父结点的左子结点
            q->left = subtree;
        else
            q->right = subtree;
    }
        //p是双分支结点
    else {
        BTNode *twobranch = p; //记下双分支结点的位置

//        p = twobranch->left; //在双分支结点的左子树中寻找中序前驱
//        while (p->right != NULL) {
//            q = p; //q为p的父结点
//            p = p->right; //左子树的最右结点即中序前驱
//        }

        p = twobranch->right; //在双分支结点的左子树中寻找中序后继
        while (p->left != NULL) {
            q = p; //q为p的父结点
            p = p->left; //左子树的最右结点即中序后继
        }

        //此时p指向中序前驱
//        twobranch->data = p->data; //用中序前驱的值代替双分支结点的值

        //此时p指向中序后继
        //注意上面已经被改动
        twobranch->data = p->data; //用中序后继的值代替双分支结点的值

        //需要删除中序前驱
        //中序前驱没有右子树，在删除中序前驱之前保存其左子树
//        if (p == twobranch->left) //特殊情况：如果中序前驱就是双分支结点的左子树的根
//            twobranch->left = p->left;
//        else //一般情况
//            q->right = p->left;
//    }

        //需要删除中序后继
        //中序前驱没有右子树，在删除中序后继之前保存其左子树
    if (p == twobranch->right) //特殊情况：如果中序后继就是双分支结点的左子树的根
        twobranch->right = p->right;
    else //一般情况
        q->left = p->right;
}

    //删除结点并释放内存
    delete p;
    return true;
}

//中序遍历二叉树
void InOrder(BTNode *root)
{
    if (root != NULL) {
        InOrder(root->left); //前序遍历左子树
        cout << root->data << " "; //访问根
        InOrder(root->right); //前序遍历右子树
    }
}

//释放二叉树中所有结点
void ClearBTree(BTNode *&root)
{
    if (root != NULL) {
        ClearBTree(root->left);
        ClearBTree(root->right);
        delete root;
        root = NULL;
    }
}
