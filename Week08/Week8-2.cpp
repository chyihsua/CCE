#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int bad=0;
    for (int i=2;i<n;i++)
    {
        if (n%i==0) bad=1;//�㰣�D���
    }
    if (bad=0) printf("%d ���",n);
    else printf("%d���O���",n);
}


