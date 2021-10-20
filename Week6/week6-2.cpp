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
}
