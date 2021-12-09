//
// Created by Kazamine_Setueka on 2021/12/9.
//

#include "../Weed15_H_Test1_1/ArrayList.cpp"

int main()
{
    ElemType A[] = {52, 49, 80, 36, 14, 58, 61, 23, 97, 75};
    SqList my_list;
    InitList(my_list);

    //在my_list的尾部依次插入数组元素
    for (int i = 0; i < 10; i++)
        ListInsert(my_list, i + 1, A[i]);

    cout << "顺序表中元素：";
    TraverseList(my_list);

    InsertSort(my_list);
//    SelectSort(my_list);

    cout << "顺序表排序后：";
    TraverseList(my_list);
    return 0;
}
