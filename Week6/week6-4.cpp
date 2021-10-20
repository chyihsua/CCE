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
   	printf("ª½¨¤");
   }
   else if (c*c>a*a+b*b)
   {
   	printf("¶w¨¤");
   }
   else if (c*c>a*a+b*b)
   {
   	printf("¾U¨¤");
   }
}
