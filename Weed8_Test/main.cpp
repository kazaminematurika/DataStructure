////
//// Created by Kazamine_Setueka on 2021/10/20.
////
//
////#include "../Weed8_H_Test/BiTree8.h"
//
//#include "../Weed8_H_Test/BiThree8.h"
//
////找出二叉树中数值为item的节点
//BTNode *FindBTree(BTNode *root, ElemType item)
//{
//    if (root == NULL){
//        return NULL;
//    }
//    if (root->data == item){
//        return root;
//    }
//    BTNode *p = FindBTree(root->left, item);
//    if (p != NULL) {
//        return p;
//    }
//    else{
//        return FindBTree(root->right, item);
//    }
//}
//
//
//
//int main()
//{
//    BTNode *root;
////    ElemType A[] = "ABD##E##CF#G###"; //以"#"补全空分支后的前序遍历序列
////        ElemType A[] = "ABD###C##";
////        ElemType A[] = "ABD##E##C#F##";
//    ElemType A[] = "AB#CD##E##F#G##";
//
//    InitBTree(root); //初始化空二叉树
//    CreateBTree_Pre(root, A); //以前序遍历序列建立二叉树
//
//    cout << "前序遍历序列：";
//    PreOrder(root); //输出前序遍历序列
//    cout << endl;
//
//    cout << "中序遍历序列：";
//    InOrder(root); //输出中序遍历序列
//    cout << endl;
////    InvertBiTree(root);
////    cout << "输出反转后的二叉树中序遍历";
////    InOrder(root);
////    cout << endl;
//
//    cout << "后序遍历序列：";
//    PostOrder(root); //输出后序遍历序列
//    cout << endl;
//
//
////    cout << "深度：" << BTreeDepth(root) << endl; //计算二叉树深度
//
////    cout << "输出二叉树节点的个数:\t" << BTreeCount(root);
//
//
//
//
//
//    //找出二叉树中数值为item的节点
////    cout << "找出二叉树中数值为item的节点\t" << FindBTree(root, 'G');
////    ClearBTree(root);
//    return 0;
//
//
//}