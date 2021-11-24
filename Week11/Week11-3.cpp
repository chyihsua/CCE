#include <stdio.h>
int a[10]={4,5,6,1,2,3,0,7,8,9};
int main()
{
    for (int i=0;i<10;i++) printf("%d ",a[i]);//瞷皚硂妓
    printf("\n");

    for(int y=0;y<9;y++) //场ЧΘ璶ユ传碭Ω
    {
        for(int i=0;i<10-1;i++) //Ωユ传
        {
            if (a[i]>a[i+1]) //オユ传
            {
                int semp=a[i];
                a[i]=a[i+1];
                a[i+1]=semp;
            }
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
