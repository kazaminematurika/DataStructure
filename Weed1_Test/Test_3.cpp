//
// Created by Kazamine_Setueka on 2021/9/1.
//
#include <iostream>
using namespace std;

struct Rect{
    double length;
    double width;
};

void InitRect(Rect &rect, double l, double w);
double Circumference(Rect &rect);
double AreaRect(Rect &rect);

int main(){
    Rect my_Rect;
    double length, width, circ, area;
    cout << "请输入长以及宽:" << endl;
    cin >> length >> width;
    InitRect(my_Rect, length, width);
    cout << "长为:" << length << "宽为:" << width << "的长方形的周长是:" << Circumference(my_Rect);
    cout << "\n长为:" << length << "宽为:" << width << "的长方形的周长是:" << AreaRect(my_Rect);
    return 0;
}

void InitRect(Rect &rect, double l, double w){
    rect.length = l;
    rect.width = w;
}

double Circumference(Rect &rect){
   double circ = (rect.width + rect.length) * 2;
   return circ;
}

double AreaRect(Rect &rect){
    double area = rect.width * rect.length;
    return area;
}