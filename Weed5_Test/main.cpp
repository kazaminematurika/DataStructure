//
// Created by Kazamine_Setueka on 2021/9/29.
//

//#include "../Weed5_H_Test/LinkQueue.h"
//#include "../Weed5_H_Test/SqQueue.h"
//#include "../Weed5_H_Test/SqStack.h"
//#include "../Weed5_H_Test/LinkStack.h"
//
////void Reverse(LinkQueue Q)
////{
////    ElemType t;
////    LinkStNode *S;
////    InitStack(S);
////    while (!QueueEmpty(Q)) {
////        DeQueue(Q, t);
////        Push(S, t);
////    }
////    while (!StackEmpty(S)) {
////        Pop(S, t);
////        EnQueue(Q, t);
////    }
////}
//
//bool Palindrome_Test(char *str) {
//    ElemType item;
//    LinkQueue Q;
//    ElemType t;
//    LinkStNode *S;
//    InitStack(S);
//    InitQueue(Q);
//    for (int i = 0; str[i] != '\0'; i++) {
//        EnQueue(Q, str[i]);
//        Push(S, str[i]);
//    }
//    //判读是否为空的线性队列或者判断是否为空的栈堆
//    while (!(QueueEmpty(Q)) && !(StackEmpty(S))) {
//        DeQueue(Q, item);
//        Pop(S, t);
////        使得出队的每一个元素都与出栈的每一个元素进行对比
//        if (item != t) {
//            return false;
//        } else {
//            continue;
//        }
//    }
//    return true;
//}

//int main()
//{
//    //链式队列实验 开始
//    ElemType temp;
//    LinkQueue Q1;
//    InitQueue(Q1);
//
//    EnQueue(Q1, 'a'); //断点①
//    EnQueue(Q1, 'b');
//    EnQueue(Q1, 'c');
//
//    DeQueue(Q1, temp); //断点②
//    DeQueue(Q1, temp);
//    DeQueue(Q1, temp);
//    //链式队列实验 结束
//
//    //循环队列实验 开始
//    SqQueue Q2;
//    InitQueue(Q2);
//
//    EnQueue(Q2, 'a'); //断点③
//    EnQueue(Q2, 'b');
//    EnQueue(Q2, 'c');
//    EnQueue(Q2, 'd');
//
//    EnQueue(Q2, 'e'); //此处入队是否成功？
//
//    DeQueue(Q2, temp); //断点④
//    DeQueue(Q2, temp);
//    DeQueue(Q2, temp);
//    DeQueue(Q2, temp);
//
//    for (int i = 0; i < 4; i++)
//        EnQueue(Q2, 'f' + i);
//    EnQueue(Q2, 'j'); //断点⑤ 此处入队是否成功？
//    //循环队列实验 结束

//    *
//int main(){
//    LinkQueue Q;
//    InitQueue(Q);
//    for (int i = 0; i < 4; i++)
//      EnQueue(Q, 'a' + i);
//    TraverseQueue(Q);
//    Reverse(Q);
//    TraverseQueue(Q);
////    /*
//
//    return 0;
//    char str[] = {'a', 'b', 'c', 'a', 'b'};
//    char str[20];
//    cout << "输入一个字符串：";
//    cin >> str;
//    if (Palindrome_Test(str))
//        cout << str << "是回文" << endl;
//    else
//        cout << str << "不是回文" << endl;
//    return 0;
//
//}