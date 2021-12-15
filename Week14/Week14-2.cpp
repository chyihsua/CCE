#include <stdio.h>
int a[2][3]={
    {10,20,30},{40,50,60}
    };
///a[左手i][右手j]
int main()
{
    for(int i=0;i<2;i++) ///左手i
    {
        for(int j=0;j<3;j++) ///右手j
        {
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
        }
        printf("\n");
    }
}
