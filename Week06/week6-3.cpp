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
