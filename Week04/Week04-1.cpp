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
    if (c>0) printf ("c�O����");
    if (c<0) printf("c�O�t��");
    if (c==0) printf("c����0");

    if (10>0) printf("10>0����\n");
    if (10<0) printf("10<0����\n");
    if (-3) printf("-3�O���ߪ��ܡH\n");
    if (-2) printf("-2�O���ߪ��ܡH\n");
    if (-1) printf("-1�O���ߪ��ܡH\n");
    if (0) printf("0�O���ߪ��ܡH\n");
    if (1) printf("1�O���ߪ��ܡH\n");
    if (2) printf("2�O���ߪ��ܡH\n");
    if (3) printf("3�O���ߪ��ܡH\n");

   int d;
   scanf("%d",&d);
   if (d%2==0)
   printf("even");
   if (d%2==1)
   printf("odd");
}
