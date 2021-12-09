////
//// Created by Kazamine_Setueka on 2021/12/1.
////
//
//#include "../Weed14_H_Test/ArrayHash.h"
//#include "../Weed14_H_Test/LinkHash.h"
//
//int main()
//{
//    //开放定址法处理冲突
//    int Array[] = { 23,13,45,15,16,26,18,20,31 };
//    ArrayHash my_hash1;
//    InitHash(my_hash1);
//    for (int i = 0; i < 9; i++)//建立哈希表
//        HashInsert(my_hash1, Array[i]);
//    cout << "上面的数字代表存储位置，下面是关键字，-1是空标志，-2是删除标志" << endl;
//    TraverseHash(my_hash1);
//
//    int k = 45;
//    cout << endl << k << "在" << HashSearch(my_hash1, k) << "号位" << endl;
//
//    k = 5;
//    cout << endl << "插入" << k << "的结果：" << endl;
//    HashInsert(my_hash1, k);
//    TraverseHash(my_hash1);
//
//    k = 26;
//    cout << endl << "删除" << k << "的结果：" << endl;
//    HashDelete(my_hash1, k);
//    TraverseHash(my_hash1);
//
//    k = 5;
//    cout << endl << "删除" << k << "的结果：" << endl;
//    HashDelete(my_hash1, k);
//    TraverseHash(my_hash1);
//
//    k = 10;
//    cout << endl << "插入" << k << "的结果：" << endl;
//    HashInsert(my_hash1, k);
//    TraverseHash(my_hash1);
//
//    k = 27;
//    cout << endl << k << "在" << HashSearch(my_hash1, k) << "号位" << endl;
//    cout << endl << "插入" << k << "的结果：" << endl;
//    HashInsert(my_hash1, k);
//    TraverseHash(my_hash1);
//
//    //链地址法处理冲突
//    //可在关键语句设置断点并调试程序，了解链地址法构建哈希表以及查找、插入、删除的过程
//    LinkHash my_hash2;
//    InitHash(my_hash2);
//    for (int i = 0; i < 9; i++)
//        HashInsert(my_hash2, Array[i]);
//    HashSearch(my_hash2, k);
//    HashInsert(my_hash2, k);
//    HashDelete(my_hash2, k);
//    ClearHash(my_hash2);
//    return 0;
//}