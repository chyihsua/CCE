#include <stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++)
	{
    scanf("%d", &a[i] );
	}
    for(int y=0;y<100;y++) //全部完成要交換幾次
    {
        for(int i=0;i<100-1;i++) //一次的交換
        {
            if (a[i]>a[i+1]) //左右交換
            {
                int semp=a[i];
                a[i]=a[i+1];
                a[i+1]=semp;
            }
        }
    }
    for (int i=0;i<100;i++) printf("%d\n",a[i]);

}
