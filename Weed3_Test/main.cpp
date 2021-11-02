//
// Created by Kazamine_Setueka on 2021/9/15.
//


//    for(int i = 0; i < 4; i++){
//        ListInsert(L, 1, 'a' + i);
        //在列表的尾部插入元素
//        ListInsert(L, ListLength(L) + 1, 'a' + i);
//    }
//
//    TraverseList(L);
//
//    if (!ListEmpty(L)){
//        cout << "\n列表的长度是:" << ListLength(L) << endl;
//    }
//
//    ElemType type;
//    Find_pos(L, 3, type);
//    cout << "\n输出列表的第三个元素是:" << type << endl;
//
//    cout << "\n输出元素a的位置是:" << Find_item(L, 'a') << endl;
//
//    ListInsert(L, 3, 'f');
//    TraverseList(L);
//    char k;
//    ListDelete(L, 2, k);
//    cout << "\n输出被删除的第二个元素是:" << k << endl;
//    TraverseList(L);
//    char input;
//    cout << "请输入想要删除的元素:" << endl;
//    cin >> input;
//    if (ListDelete(L, input)){
//        cout << "被删除的元素是: " << input << endl;
//        TraverseList(L);
//    }
//    DestroyList(L);

//#include <ctime>
//#include "../Weed3_H_Test/linkedlist.h"
//int main(){
//    LinkNode *L;
//    InitList(L);
//    for(int i = 3; i < 30; i++){
//        if (i % 3 == 0) {
//            ListInsert(L, ListLength(L) + 1, i);
//        }
//    }
//    cout << "输出添加之前的表:" << endl;
//    TraverseList(L);
//    ListInsert_order(L, 13);
//    cout << "输出添加之后的表:" << endl;
//    TraverseList(L);
//    return 0;
//}
//int main(){
//    LinkNode *L;
//    InitList(L);
//    ListInsert(L, 1, 30);
//    ListInsert(L, 2, 5);
//    ListInsert(L, 3, 16);
//    ListInsert(L, 4, 56);
//    ListInsert(L, 5, 17);
//    ListInsert(L, 6, 2);
//    ListInsert(L, 7, 20);
//    ListInsert(L, 8, 40);
//    cout << "输出插入数据删除最大值之前的表" << endl;
//    TraverseList(L);
//    int a = 0;
//    Delete_max(L, a);
//    cout << "\n输出插入数据删除最大值之后的表" << endl;
//    TraverseList(L);
//};
//int main()
//{   LinkNode *L;
//    InitList(L);
//    ElemType A[]={ {101,85}, {103,90.5}, {104,73}, {105,55} };
//
//    for(int i=0; i<4; i++)
//        ListInsert(L, i+1, A[i]);
//    cout << "学号 成绩" << endl;
//    TraverseList(L);
//
//    ListDelete(L, 103);
//    cout << "学号 成绩" << endl;
//    TraverseList(L);
//    DestroyList(L);
//    return 0;
//}

