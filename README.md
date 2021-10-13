# CCE
資傳一乙程式設計上課記錄

# 第01週

```C
#include <stdio.h>
int main() 
{
printf("Hello World\n");
}
```

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

# 第04週
```C
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a<=100 && a>=90)
        printf("A+");
    if (a<=89 && a>=80)
        printf("A");
    if (a<=79 && a>=70)
        printf("B");
    if (a<=69 && a>=60)
        printf("C");
    if (a<=59)
        printf("D");
   
    int c;
    scanf("%d",&c);
    if (c>0) printf ("c是正數");
    if (c<0) printf("c是負數");
    if (c==0) printf("c等於0");
    
    if (10>0) printf("10>0成立\n");
    if (10<0) printf("10<0成立\n");
    if (-3) printf("-3是成立的嗎？\n");
    if (-2) printf("-2是成立的嗎？\n");
    if (-1) printf("-1是成立的嗎？\n");
    if (0) printf("0是成立的嗎？\n");
    if (1) printf("1是成立的嗎？\n");
    if (2) printf("2是成立的嗎？\n");
    if (3) printf("3是成立的嗎？\n");

   int d;
   scanf("%d",&d);
   if (d%2==0)
   printf("even");
   if (d%2==1)
   printf("odd");
}
```
