#include <stdio.h>
int a[10]={4,5,6,1,2,3,0,7,8,9};
int main()
{
    for (int i=0;i<10;i++) printf("%d ",a[i]);//現在的陣列長這樣
    printf("\n");

    for(int y=0;y<9;y++) //全部完成要交換幾次
    {
        for(int i=0;i<10-1;i++) //一次的交換
        {
            if (a[i]>a[i+1]) //左右交換
            {
                int semp=a[i];
                a[i]=a[i+1];
                a[i+1]=semp;
            }
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
