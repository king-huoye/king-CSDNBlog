#include <stdio.h>
int main() {
    int a[10];//定义十个数组
    int i,j,t;//定义变量
    printf("input 10 numbers:\n");//输入十个数字
    for(i=0;i<10;i++)//
        scanf("%d",&a[i]);
    printf("\n");//换行//
    for(j=0;j<9;j++)//引入j的循环，构建j与i的关系//
        for(i=0;i<9-j;i++)//9-J后i属于[1,9],比较时就有十个数字比较//
            if(a[i]>a[i+1]){//冒泡排序比较//
                t=a[i];
                a[i]=a[i+1];//相邻两个数比较//
                a[i+1]=t; }//该数为最大的数字//
    printf("the sorted numbers is:\n");
    for(i=0;i<10;i++)
        printf("%d\n",a[i]);//输出答案，从小到大，共十个，a0为第一个元素，不存在a10//
    printf("\n");
    return 0;
}