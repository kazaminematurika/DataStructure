////
//// Created by Kazamine_Setueka on 2021/9/29.
////
//
//#ifndef CLIONGONGZUODIAN_LINKQUEUE_H
//#define CLIONGONGZUODIAN_LINKQUEUE_H
//
//#endif //CLIONGONGZUODIAN_LINKQUEUE_H
//#include <iostream>
//using namespace std;
//
//typedef char ElemType;
//
//typedef struct Node {
//    ElemType data;
//    struct Node *next;
//} QNode; //结点结构
//
//typedef struct {
//    QNode *front; //队头
//    QNode *rear; //队尾
//} LinkQueue; //队列结构
//
////初始化带头结点的链队列
//bool InitQueue(LinkQueue &Q);
//
////判链队列空
//bool QueueEmpty(LinkQueue Q);
//
////入队
//bool EnQueue(LinkQueue &Q, ElemType item);
//
////出队
//bool DeQueue(LinkQueue &Q, ElemType &item);
//
////取队头元素
//bool GetFront(LinkQueue Q, ElemType &item);
//
////遍历队列
//bool TraverseQueue(LinkQueue Q);
//
////释放链队列
//void Destroy(LinkQueue &Q);