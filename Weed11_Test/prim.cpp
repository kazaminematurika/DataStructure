#include <stdio.h>
#define MAXV 20 //最多顶点数
#define INF 32767 //INF表示∞

typedef char InfoType;
typedef struct
{
  int no; //顶点编号
  InfoType info; //顶点其他信息
} VertexType; //顶点类型

typedef struct //图的定义
{
  int edges[MAXV][MAXV]; //邻接矩阵
  int n, e; //顶点数，弧数
  VertexType vexs[MAXV]; //存放顶点信息
} MGraph; //图的邻接矩阵类型

void Prim(MGraph g, int v)
{
  int lowcost[MAXV]; //顶点i是否在U中
  int min;
  int closest[MAXV], i, j, k = 0;
  for (i = 0; i < g.n; i++) //给lowcost[]和closest[]置初值
  {
    lowcost[i] = g.edges[v][i];
    closest[i] = v;
  }
  for (i = 1; i < g.n; i++) //找出n-1个顶点
  {
    min = INF;
    for (j = 0; j < g.n; j++) //在(V-U)中找出离U最近的顶点k
      if (lowcost[j] != 0 && lowcost[j] < min) {
        min = lowcost[j];
        k = j; //k记录最近顶点的编号
      }
    printf(" 边(%d,%d)权为:%d\n", closest[k], k, min);
    lowcost[k] = 0; //标记k已经加入U
    for (j = 0; j < g.n; j++) //修改数组lowcost和closest
      if (g.edges[k][j] != 0 && g.edges[k][j] < lowcost[j]) {
        lowcost[j] = g.edges[k][j];
        closest[j] = k;
      }
  }
}

int main()
{
  int i, j;
  MGraph g;
  g.n = 5;
  g.e = 7;
  int a[MAXV][MAXV] = {
      {0,   1,   INF, INF, 7},
      {1,   0,   6,   INF, 5},
      {INF, 6,   0,   3,   4},
      {INF, INF, 3,   0,   2},
      {7,   5,   4,   2,   0}
  };

  for (i = 0; i < g.n; i++) //建立图的邻接矩阵
    for (j = 0; j < g.n; j++)
      g.edges[i][j] = a[i][j];
  printf("最小生成树构成:\n");
  Prim(g, 0);
  printf("\n");
}