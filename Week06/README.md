# 第06週
```C
#include <stdio.h>

int main()
{
    int a=999;
    int b=100;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d\n",a,b);
    
    #include <stdio.h>

int main()
{
    int a,b,c;
    int temp;
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d b=%d c=%d\n",a,b,c);
    if (a>c)
    {
    	temp=a;
    	a=c;
    	c=temp;
    }
    printf("a=%d b=%d c=%d\n",a,b,c);
    if (b>c)
    {
    	temp=b;
    	b=c;
    	c=temp;
    }
    printf("a=%d b=%d c=%d\n",a,b,c);
}

}

#include <stdio.h>

int main()
{
    int a,b,c;
    int temp;
    scanf("%d %d %d",&a,&b,&c);
    if (a>c)
    {
    	temp=a;
    	a=c;
    	c=temp;
    }
    if (b>c)
    {
    	temp=b;
    	b=c;
    	c=temp;
    }
 
   if (a+b<c)
   {
   	printf("error");
   }
   else if (c*c==a*a+b*b)
   {
   	printf("直角");
   }
   else if (c*c>a*a+b*b)
   {
   	printf("鈍角");
   }
   else if (c*c>a*a+b*b)
   {
   	printf("銳角");
   }
}

#include <stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    if (a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if (b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d %d %d",a,b,c);
}

```