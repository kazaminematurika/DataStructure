//
// Created by Kazamine_Setueka on 2021/9/25.
//

#include "../Weed4_H_Test/LinkStack.h"
#include "../Weed4_H_Test/SqStack.h"

//int main(){
//{
//    ElemType result;
//
//    //顺序存储结构实现实验
//    SqStack my_stack1;
//    InitStack(my_stack1);
//
//    for (int i = 1; i <= 10; i++)
//        Push(my_stack1, i); //数据入栈，断点①
//
//    //遍历
//    TraverseStack(my_stack1);
//
//    while (!StackEmpty(my_stack1))
//        Pop(my_stack1, result); //数据出栈，断点②
//    return 0;}
//
//    链式存储结构实现实验
//    LinkStNode *my_stack2;
//    InitStack(my_stack2);
//
//    for (int i = 1; i <= 10; i++)
//        Push(my_stack2, i); //数据入栈，断点③
//
//        // 遍历栈
//    TraverseStack(my_stack2);
//
//    while (!StackEmpty(my_stack2))
//        Pop(my_stack2, result); //数据出栈，断点④
//
//    Destroy(my_stack2);
//
//    return 0;}

//    int main(){
//        charType charResult3;
//        charType charResult4;
//        charLinkStNode *my_stack3;
//        charLinkStNode *my_stack4;
//        InitStack(my_stack3);
//        InitStack(my_stack4);
//        char charlist[] = {'a', 'b', 'c', 'd', 'b', 'c', 'a'};
//        for (int i = 0; i <= sizeof(charlist) - 1; i++) {
//            Push(my_stack3, charlist[i]);
//        }
//        for (int i = sizeof(charlist) - 1; i >= 0 ; i--) {
//            Push(my_stack4, charlist[i]);
//        }
//        while (!StackEmpty(my_stack3) && !StackEmpty(my_stack4)){
//            Pop(my_stack4, charResult4);
//            Pop(my_stack3, charResult3);
//            if (charResult3 != charResult4){
//                cout << "不是回文数";
//                return 0;
//            }
//        }
//        cout << "是回文数";
//        return 0;
//    char Operatorlist[] = {'{', '(', '[', '{', '}', ']', ')'};
//        for (int i = 0; i <= sizeof(Operatorlist) - 1; i++) {
//            Push(my_stack3, Operatorlist[i]);
//        }
//        for (int i = sizeof(Operatorlist) - 1; i >= 0; i--) {
//            Push(my_stack4, Operatorlist[i]);
//        }
//        while (!StackEmpty(my_stack3) && !StackEmpty(my_stack4)){
//            Pop(my_stack3, charResult3);
//            Pop(my_stack4, charResult4);
//            if (charResult3 == '{' && charResult4 != '}'){
//                cout << "符号不匹配";
//                return 0;
//            }
//            if (charResult3 == '[' && charResult4 != ']'){
//                cout << "符号不匹配";
//                return 0;
//            }
//            if (charResult3 == '(' && charResult4 != ')'){
//                cout << "符号不匹配";
//                return 0;
//            }
//        }
//        cout << "符号匹配";
//        return 0;
//    }
//int main(){
//    char charlist [] = {'a', 'b', 'c', 'd', 'c', 'b', 'a'};
//    char charlist [] = {'a', 'b', 'c', 'd', 'c', 'b', 'a'};
//    if (IsReverse(charlist)){
//        cout << "该数据是回文数";
//    } else{
//        cout << "该数据不是回文数";
//    }
//    return 0;
//    char Operatorlist[] = {'{', '(', '[', '{', '}', ']', ')'};
//    char Operatorlist[] = {'{', '(', '[', '{', ']'};
//        if (IsValid(Operatorlist)){
//        cout << "该组字串符匹配";
//    } else{
//        cout << "该组字串符不匹配";
//    }
//    return 0;
//}