#include <stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++)
	{
    scanf("%d", &a[i] );
	}
    for(int y=0;y<100;y++) //���������n�洫�X��
    {
        for(int i=0;i<100-1;i++) //�@�����洫
        {
            if (a[i]>a[i+1]) //���k�洫
            {
                int semp=a[i];
                a[i]=a[i+1];
                a[i+1]=semp;
            }
        }
    }
    for (int i=0;i<100;i++) printf("%d\n",a[i]);

}
