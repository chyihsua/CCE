# 第03週

```C
#include <stdio.h>

int main()
{
    int a=123,b=10;
    printf("%d\n",a/b);
    printf("%d\n",a%b);

    int c=123,d=10;
    int ans=c/d;
    float ans2=123.0/10.0;
    printf("整數除整數%d\n",ans);
    printf("float的除法 %f\n",ans2);


    float pi=3.14159265358979;
    double pii=3.14159265358979;
    printf("%f\n",pi);
    printf("%f\n",pii);
    printf("%.8f\n",pi);
    printf("%.12f\n",pii);
    printf("%9.5f\n",pii);


    int e=123,f=10;
    int ans3=e/f;
    float ans4=123.0/10.0;
    printf("整數除整數 %d\n",ans3);
    printf("float的除法 %f\n",ans4);
}
```