//
// Created by Kazamine_Setueka on 2021/10/20.
//
#include <stdio.h>
float averag(float a[]);
float he(float a[]);
int main(){
   float a[8];
    printf("请输入数字以0.0结束");
    for (int i = 0; i < 7; i++) {
        scanf("%f", &a[i]);
        if (a[i] == 0.0){
            break;
        }
    }

    printf("%f", averag(a));
    printf("\n");
    printf("%f", he(a));
}

float averag(float a[]){
    int d;
    float e = 0, f;
    for (d = 0; d < 7; d++) {
        e = a[d] + e;
    }
    f = e / 8;
    return f;
}

float he(float a[]){
    int d;
    float e;
    for (d = 0; d < 7; d++) {
        e = a[d] + e;
    }
    return e;
}
