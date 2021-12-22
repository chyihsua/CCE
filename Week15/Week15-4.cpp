#include <stdio.h> 輾轉相除法
int box(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;
    return box(b,a%b);///中的變大 小的變中
}

int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    int ans=box(a,b);
    printf("%d",ans);
}
