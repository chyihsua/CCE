#include <stdio.h> 輾轉相除法
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int c=a%b;
    printf("a大的%3d b中的%3d c小的%3d\n",a,b,c);

    while(1)
    {
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a大的%3d b中的%3d c小的%3d\n",a,b,c);
    }

    printf("因為c=0離開迴圈 答案是中間的b\n");
    printf("%d",b);
}
