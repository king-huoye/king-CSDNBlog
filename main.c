#include <stdio.h>
int main() {
    int a[10];//����ʮ������
    int i,j,t;//�������
    printf("input 10 numbers:\n");//����ʮ������
    for(i=0;i<10;i++)//
        scanf("%d",&a[i]);
    printf("\n");//����//
    for(j=0;j<9;j++)//����j��ѭ��������j��i�Ĺ�ϵ//
        for(i=0;i<9-j;i++)//9-J��i����[1,9],�Ƚ�ʱ����ʮ�����ֱȽ�//
            if(a[i]>a[i+1]){//ð������Ƚ�//
                t=a[i];
                a[i]=a[i+1];//�����������Ƚ�//
                a[i+1]=t; }//����Ϊ��������//
    printf("the sorted numbers is:\n");
    for(i=0;i<10;i++)
        printf("%d\n",a[i]);//����𰸣���С���󣬹�ʮ����a0Ϊ��һ��Ԫ�أ�������a10//
    printf("\n");
    return 0;
}