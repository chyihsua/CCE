#include <stdio.h> C-TUTOR
int box(int a,int b)
{
    int ans;
    if (a==0) {ans=b;
     return ans;
    }
    if (b==0)  {ans=a;
     return ans;
    }
    return box(b,a%b);///�����ܤj �p���ܤ�
}

int main()
{
    int a=987654321,b=123456789;
    int ans=box(a,b);
    printf("%d",ans);
}
