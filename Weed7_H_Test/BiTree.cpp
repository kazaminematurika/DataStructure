////
//// Created by Kazamine_Setueka on 2021/10/13.
////
//
//#include "BiTree.h"
//
////初始化空二叉树
//void InitBTree(BTNode *&root)
//{
//    root = NULL;
//}
//
////按照课件示意图建立一棵二叉树
//void CreateBTree(BTNode *&root)
//{
//    BTNode *a, *b, *c, *d, *e, *f, *g;
//
//    a = root = new BTNode;
//    a->data = 'A';
//
//    b = a->left = new BTNode;
//    b->data = 'B';
//
//    c = a->right = new BTNode;
//    c->data = 'C';
//    c->right = NULL;
//
//    d = b->left = new BTNode;
//    d->data = 'D';
//    d->left = NULL;
//    d->right = NULL;
//
//    e = b->right = new BTNode;
//    e->data = 'E';
//    e->left = NULL;
//    e->right = NULL;
//
//    f = c->left = new BTNode;
//    f->data = 'F';
//    f->left = NULL;
//
//    g = f->right = new BTNode;
//    g->data = 'G';
//    g->left = NULL;
//    g->right = NULL;
//}
//
//int N0(BTNode *root){
//    if(root == NULL){
//        return 0;
//    }
//
//    if (root->left == NULL && root->right == NULL){
//        return 1;
//    }
//
//    return N0(root->right) + N0(root->left);
//}
//
//int N2(BTNode *root){
//    if (root == NULL){
//        return 0;
//    }
//
//    if (root->right == NULL || root->left == NULL){
//        return 0;
//    }
//
//    if (root->left != NULL && root->right != NULL){
//        //判断了第一层的根节点之后+1再次判断第一层的左右两节点是否满足条件
//        return 1 + N2(root->left) + N2(root->right);
//    }
//
//    return N2(root->left) + N2(root->right);
//}
