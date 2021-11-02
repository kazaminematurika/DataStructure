//
// Created by Kazamine_Setueka on 2021/9/1.
//
#include <iostream>
using namespace std;
struct StructTest
{
    int a1;
    int a2;
};
int main(){
    StructTest my_Var;
    cout << "输出相应的内存存放地址的16位进制数字\n";
    cout << &my_Var << "    " << &my_Var.a1 << "   " << &my_Var.a2 << endl;
}