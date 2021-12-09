//
// Created by Kazamine_Setueka on 2021/12/9.
//

#include <iostream>
using namespace std;

//int A[5] = {30, 20, 50, 40, 25};

int A[10] = {52, 49, 80, 36, 14, 58, 61, 23, 97, 75};

//打印数组内容
void Output()
{
  int i;
  for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    cout << A[i] << " ";
  cout << endl;
}

//插入排序
void InsertSort(int Array[], int length)
{
  int i, j;
  int tmp;
  for (i = 1; i < length; i++) {
    tmp = Array[i]; //取出无序表的第一个元素插入到有序表
    for (j = i - 1; j >= 0; j--) //有序表排序
    {
      if (tmp < Array[j]) //断点①
        Array[j + 1] = Array[j]; //位置j的元素向后移动
      else
        break;
    }
    Array[j + 1] = tmp;

    Output();

  } //断点②
}

//选择排序
void SelectSort(int Array[], int length)
{
  int i, j, min;
  int tmp;
  for (i = 0; i < length - 1; i++) {
    min = i; //默认无序表的第一个元素Array[i]为最小值
    for (j = i + 1; j < length; j++) //查找最小值下标
      if (Array[j] < Array[min]) //断点③
        min = j;
    if (min != i) //找到了比i位置更小的元素且min与i的值不同
    {
      tmp = Array[i];
      Array[i] = Array[min];
      Array[min] = tmp;
    }

    Output();

  } //断点④
}

//实现折半查找插入元素
void BinInsertSort(int Array[], int length){
    //初始化数据包括插入点,临时变量,最大,最小,中值
    int i, j, temp;
    int low, height, middle;
    for ( i = 1; i < length; i++) {
        low = 0;
        height = i - 1;
        //默认最小元素为无序表的第一个
        temp = Array[i];
        //从有序区到无序区(从前往后)一直用有序区第i位的值和无序区的中间值进行比较
        while (low <= height){
             middle = (low + height) / 2;
             if(Array[middle] > temp){
                 height = middle - 1;
             } else{
                 low = middle + 1;
             }
        }

        for ( j = i; j > low; j--) {
            //如果插入的位置比最小值要小则插入位置后的元素全部往后移动一位
            Array[j] = Array[j - 1];
        }
        Array[low] = temp;

        Output();
    }
}
int main()
{
//  InsertSort(A, 5);
//  SelectSort(A,5);
//  InsertSort(A,10);
//  SelectSort(A,10);
    BinInsertSort(A, 10);
  return 0;
}
