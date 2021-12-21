#include <iostream>
using namespace std;

int A[] = {52, 49, 80, 36, 14, 58, 61, 23, 97, 75};
int B[] = {36, 49, 52, 75, 80, 14, 23, 58, 61, 97};

void Output(int L[])
{
  for (int i = 0; i < 10; i++)
    cout << L[i] << " ";
  cout << endl;
}

//对R中的数据进行一次快速排序
//count记录调用次数，每调用一次加1
//s　  R中划分的区间的下限
//e　  R中划分的区间的上限
void QuickSort(int R[], int s, int e)
{
  static int count = 1;
  int low = s, high = e; //断点①
  int x = R[s]; //x暂存枢轴元素
  while (low < high) {
    //内循环①从右到左查找比枢轴小的元素
    while (low < high && R[high] >= x)
      high--;
    R[low] = R[high]; //将小数放在左侧小数序列中

    //内循环②从左到右查找比枢轴大或相等的元素
    while (low < high && R[low] < x)
      low++;
    R[high] = R[low]; //将大数放在右侧大数序列中
  } //循环结束时low、high重合
  R[low] = x; //确定枢轴的最终存放位置

  cout << "第" << count << "趟: ";
  Output(A);

  count++; //断点② 完成一次快速排序的划分过程

  //s，e的数值均不变
  if (s < low - 1)
    QuickSort(R, s, low - 1); //对左侧小数序列进行递归划分
  if (high + 1 < e)
    QuickSort(R, high + 1, e); //对右侧大数序列进行递归划分
}

//A中两个有序序列（s－m）和（m+1－e）合并到为一个有序序列(s-e)
//要求归并的两个序列中数据是各自有序的
//s 第一个有序序列的开始下标
//m 第一个有序序列的结束下标
//e 第二个有序序列的结束下标
void Merge(int A[], int s, int m, int e)
{
  int *R = new int[e - s + 1]; //动态申请临时临时数组R
  int i, j, k;
  //a.从数组A[s]~A[m]和A[m+1]~A[e]中各取一最小数A[i]和A[j]
  //b.比较取出的两个数，将较小数按顺序放入数组临时数组R中
  //c.从较小数对应的数组中取出下一个最小数对应语句i++或j++
  //d.重复步骤b、c直到两个序列中的数据全部取走

  i = s, j = m + 1, k = s;
    while (i <= m && j <= e){
        if (A[i] <= A[j]){
            R[k++] = A[i++];
        } else{
            R[k++] = A[j++];
        }
    }

    //e.如果s~m或m+1~e有未取走的数据，则将剩下的数全部按顺序拷贝到R中已加入的数据后
    //f.将R中数据逐一拷贝回A中
    while (i <= m){
        R[k++] = A[i++];
    }

    while (j <= e){
        R[k++] = A[j++];
    }

    A = R;
    cout << "输出归并后的结果:";
    Output(A);
}

int main()
{
  cout << "初始:  ";
  Output(A);

  //第2题
  //快速排序
//  QuickSort(A, 0, 9);

  //第4题
  //合并两个有序表
  Merge(B, 0, 4, 9);

  return 0;
}
