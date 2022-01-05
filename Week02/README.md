# 第02週

```C
#include <stdio.h>
int main ()
{
    printf("Hello World\n");///\n是換行
    printf("Hello World");
    
    int a,b ;
    scanf("%d%d",&a,&b);///%d會讀取後方數值 ///scanf後方要讀取的數值前方須加&
    printf("%d",a+b);
    
    printf("%d",300);
    
    printf("Hello World\n");
    printf("Hello%dWorld\n",300);
    printf("%d %d  %d",300,200,100);
    
    int c;
    printf("請輸入一個整數c的值");
    scanf("%d",&c);
    printf("c的數值是%d\n",c);
    printf("%d % %d',a,b);
}
```