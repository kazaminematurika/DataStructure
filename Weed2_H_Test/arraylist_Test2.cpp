////
//// Created by Kazamine_Setueka on 2021/9/8.
////
//
//#include "arraylist_Test2.h"
//
////初始化空线性表
//void InitList(SqList &L)
//{
//    L.length = 0;
//}
//
////判断线性表是否为空
//bool ListEmpty(SqList L)
//{
//    if (L.length == 0)
//        return true;
//    else
//        return false;
//}
//
////求出线性表长度
//int ListLength(SqList L)
//{
//    return L.length;
//}
//
////向线性表指定位置插入一个新元素
//bool ListInsert(SqList &L, int pos, ElemType item)
//{ //pos为插入的（逻辑）位置,item为待插入的数据元素
//    int i;
//    if (L.length == MaxSize) { //判表满
//        cout << "顺序表满，无法插入！" << endl;
//        return false;
//    }
//    if (pos < 1 || pos > L.length + 1) { //判位置
//        cout << "插入位置无效！" << endl;
//        return false;
//    }
//    for (i = L.length - 1; i >= pos - 1; i--) //向后移动元素
//        L.data[i + 1] = L.data[i];
//    L.data[pos - 1] = item; //插入
//    L.length++; //表长增一
//    return true;
//}
//
////从线性表中删除第一个与指定值匹配的元素
//bool ListDelete(SqList &L, int pos, ElemType &item)
//{ //pos为删除的（逻辑）位置,用item返回被删元素
//    int i;
//    if (ListEmpty(L)) { //判表空
//        cout << "顺序表为空表，无法删除！" << endl;
//        return false;
//    }
//    if (pos < 1 || pos > L.length) { //判位置
//        cout << "删除位置无效！" << endl;
//        return false;
//    }
//    item = L.data[pos - 1]; //删除元素前，把元素的值通过指针传递给外部，备用
//    for (i = pos; i < L.length; i++) //向前移动元素
//        L.data[i - 1] = L.data[i];
//    L.length--; //表长减一
//    return true;
//}
//
////获取顺序表中指定位置上的数据元素
//bool GetElem(SqList L, int pos, ElemType &item)
//{ //pos为指定位置,item用于返回找到的数据元素
//    if (ListEmpty(L))
//        return false;
//    if (pos < 1 || pos > L.length) {
//        cout << "位置无效" << endl;
//        return false;
//    }
//    item = L.data[pos - 1]; //把元素的值通过指针传递给外部
//    return true;
//}
//
////从线性表中查找元素，返回第一个与指定值匹配元素位置
//int Find(SqList L, ElemType item)
//{ //item为待查找的数据元素
//    int i = 0; // i表示当前查找的位置，从头开始
//    if (ListEmpty(L)) {
//        cout << "顺序表为空表，无法查找！" << endl;
//        return 0;
//    }
//    //从头到尾比较线性表中的元素，当未超出线性表的末尾，且未找到时，i向后移
//    while (i < L.length && L.data[i] != item)
//        i++;
//    if (i < L.length) //如果未超出线性表的末尾，说明找到
//        return i + 1; //返回逻辑位置
//    else
//        return 0; //超出线性表的末尾，则说明找不到
//}
//
////遍历输出线性表
//void TraverseList(SqList L)
//{
//    int i;
//    for (i = 0; i < L.length; i++) //从头到尾输出线性表的每一个元素
//        cout << L.data[i] << "  ";
//    cout << endl;
//}
//
////反向输出线性表
//void ReverseTraverseList(SqList L)
//{
//    int i;
//    for (i = L.length - 1; i > -1; i--) //从头到尾输出线性表的每一个元素
//        cout << L.data[i] << "  ";
//    cout << endl;
//}
//
//void MergeList(SqList &L1 , SqList L2){
//    int i;
//    if (L1.length == MaxSize) {
//        cout << "顺序表满，无法插入！" << endl;
//    }
//    for (i = 0; i < L2.length; i++){
//        L1.data[5 + i] = L2.data[i];
//        L1.length ++;
//    }
//}
//
//bool ListDeleteItems(SqList &L, ElemType item){
//    int i;
//    if (ListEmpty(L)) { //判表空
//        cout << "顺序表为空表，无法删除！" << endl;
//        return false;
//    }
//    //将中间的'K'特定值移动最后并且删掉它(通过删掉列表长度)
//    for (int j = 0; j < L.length - 1; j++) {
//        if (L.data[j] == item) {
//            i = L.data[L.length - 1];
//            L.data[L.length] = L.data[j];
//            L.data[j] = i;
//            L.length --;
//        }
//        //将开头的'K'值和旁边的值进行对比移动到最后
//        if (L.data[j] == item && L.data[j + 1] != item){
//            i = L.data[j + 1];
//            L.data[j + 1] = L.data[j];
//            L.data[j] = i;
////            L.length --;
//        }
//        //遍历整个列表判断最后的元素是否为'K'值并且删除它
//        for (int j = 0; j < L.length - 1; j++){
//        if (L.data[L.length - 1] == item){
//            L.length --;
//            }
//        }
//    }
//}