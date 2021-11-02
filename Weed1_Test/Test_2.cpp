//
// Created by Kazamine_Setueka on 2021/9/1.
//
#include <iostream>
using namespace std;
void swap1(int a1, int a2);
void swap2(int *pa1, int *pa2);
void swap3(int &a1, int &a2);

int main(){
    int x1 = 2;
    int x2 = 1;
    int *px1 = &x1;
    int *px2 = &x2;

    swap1(x1, x2);
    cout << "After calling swap1:x1="<<x1<<", x2="<< x2 << endl;

    x1 = 1, x2 = 2;
    swap2(px1, px2);
    cout << "After calling swap2:x1="<<x1<<", x2="<< x2 << endl;

    x1 = 1, x2 = 2;
    swap3(x1, x2);
    cout << "After calling swap3:x1="<<x1<<", x2="<< x2 << endl;
}
void swap1(int a1, int a2){
    int a3;
    a3 = a1, a1 = a2, a2 = a3;
}

void swap2(int *pa1, int *pa2){
    int a3;
    a3 = *pa1, *pa1 = *pa2, *pa2 = a3;
}

void swap3(int &a1, int &a2){
    int a3;
    a3 = a1, a1 = a2, a2 = a3;
}
