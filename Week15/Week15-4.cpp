#include <stdio.h> ����۰��k
int box(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;
    return box(b,a%b);///�����ܤj �p���ܤ�
}

int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    int ans=box(a,b);
    printf("%d",ans);
}
