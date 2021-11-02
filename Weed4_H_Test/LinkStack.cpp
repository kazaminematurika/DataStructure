////
//// Created by Kazamine_Setueka on 2021/9/25.
////
//
//#include "LinkStack.h"
//
////初始化空链栈
//bool InitStack(LinkStNode *&S)
//{
//    S = new LinkStNode;
//    if (S == NULL) {
//        cout << "初始化错误";
//        return false;
//    }
//    S->next = NULL;
//    return true;
//}
//
////判栈空
//bool StackEmpty(LinkStNode *S)
//{
//    if (S->next == NULL)
//        return true;
//    else
//        return false;
//}
//
////入栈
//bool Push(LinkStNode *S, ElemType item)
//{ //带头结点单链表的表头插入法
//    LinkStNode *t = new LinkStNode; //①生成新结点
//    if (t == NULL) {
//        cout << "出错";
//        return false;
//    }
//    t->data = item;
//
//    //②在栈顶插入新结点
//    t->next = S->next;
//    S->next = t;
//    return true;
//}
//
////出栈
//bool Pop(LinkStNode *S, ElemType &item)
//{ //删除单链表的第一个元素结点
//    //①判断栈是否为空
//    if (S->next == NULL) {
//        cout << "栈空";
//        return false;
//    }
//
//    //②删除栈顶元素
//    LinkStNode *t = S->next;
//    S->next = t->next;
//    item = t->data;
//    delete t;
//    return true;
//}
//
////取栈顶
//bool GetTop(LinkStNode *S, ElemType &item)
//{
//    //①判断栈是否为空
//    if (S->next == NULL) {
//        cout << "栈空";
//        return false;
//    }
//
//    //②取栈顶元素
//    item = S->next->data;
//    return true;
//}
//
////释放链栈
//void Destroy(LinkStNode *&S)
//{
//    LinkStNode *p;
//    while (S) {
//        p = S;
//        S = S->next;
//        delete p;
//    }
//}
//
//void TraverseStack(LinkStNode *S){
//    //①判断栈是否为空
//    if (S->next == NULL) {
//        cout << "栈空";
//    }
//    else{
//        while (S -> next != NULL){
//            LinkStNode *t = S->next;
//            S->next = t->next;
//            cout << t -> data << "\t";
//            delete t;
//        }
//    }
//}
//
//
//
////初始化空链栈
//bool InitStack(charLinkStNode *&S)
//{
//    S = new charLinkStNode;
//    if (S == NULL) {
//        cout << "初始化错误";
//        return false;
//    }
//    S->next = NULL;
//    return true;
//}
//
////判栈空
//bool StackEmpty(charLinkStNode *S)
//{
//    if (S->next == NULL)
//        return true;
//    else
//        return false;
//}
//
////入栈
//bool Push(charLinkStNode *S, charType item)
//{ //带头结点单链表的表头插入法
//    charLinkStNode *t = new charLinkStNode; //①生成新结点
//    if (t == NULL) {
//        cout << "出错";
//        return false;
//    }
//    t->data = item;
//
//    //②在栈顶插入新结点
//    t->next = S->next;
//    S->next = t;
//    return true;
//}
//
////出栈
//bool Pop(charLinkStNode *S, charType &item)
//{ //删除单链表的第一个元素结点
//    //①判断栈是否为空
//    if (S->next == NULL) {
//        cout << "栈空";
//        return false;
//    }
//
//    //②删除栈顶元素
//    charLinkStNode *t = S->next;
//    S->next = t->next;
//    item = t->data;
//    delete t;
//    return true;
//}
//
//bool IsReverse(char *s){
//    //使方法的参数为字符串数组进行传入方法
//     charLinkStNode *S;
//     charType t;
//     InitStack(S);
//     int i;
//     //判断参数列表是否已经被读取完毕'/0'表尾值
//    for(i = 0; s[i] != '\0'; i++){
//        Push(S, s[i]);
//    }
//    i = 0;
//    while (!(StackEmpty(S))){
//        Pop(S, t);
//        //数据出栈使栈的第一个和列表的第一个元素进行比较
//        if (t != s[i]){
//            return false;
//        } else{
//            //使得i+1从列表的下一个元素判断栈的下一个元素
//            i++;
//        }
//    }
//    return true;
//}
//
//bool IsValid(char *s){
//    charType charType1;
//    charLinkStNode *S;
//    InitStack(S);
//    for (int i = 0; s[i] != '\0' ; ++i) {
//        if (s[i] == '{'){
//            Push(S, '}');
//        } else if (s[i] == '('){
//            Push(S, ')');
//        }else if (s[i] == '['){
//            Push(S, ']');
//        }//左括号的对应括号则入栈,右括号则不能入栈和出栈的元素进行对比
//        else if (!Pop(S, charType1) || charType1 != s[i]){
//             return false;
//        }
//    }
//    if (InitStack(S)){
//        //如果栈已经输出完元素则证明匹配
//        return true;
//    }
//}