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
