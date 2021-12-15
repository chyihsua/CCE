#include <stdio.h>
int a[3]={10,20,30};
int b[3]={40,50,60};
int c[3];
int main()
{
    for(int i=0;i<3;i++)
    {
        c[i]=a[i]*b[i];
    }

    int ans=0;//總和
    for(int i=0;i<3;i++)
    {
        ans+=c[i];//c[i]=個別相乘結果
    }
    printf("%d",ans);
}
