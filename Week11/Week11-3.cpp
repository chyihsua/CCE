#include <stdio.h>
int a[10]={4,5,6,1,2,3,0,7,8,9};
int main()
{
    for (int i=0;i<10;i++) printf("%d ",a[i]);//�{�b���}�C���o��
    printf("\n");

    for(int y=0;y<9;y++) //���������n�洫�X��
    {
        for(int i=0;i<10-1;i++) //�@�����洫
        {
            if (a[i]>a[i+1]) //���k�洫
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
