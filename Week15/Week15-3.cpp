#include <stdio.h> ����۰��k
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int c=a%b;
    printf("a�j��%3d b����%3d c�p��%3d\n",a,b,c);

    while(1)
    {
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a�j��%3d b����%3d c�p��%3d\n",a,b,c);
    }

    printf("�]��c=0���}�j�� ���׬O������b\n");
    printf("%d",b);
}
