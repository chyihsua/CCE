#include <stdio.h>
char line[300]="1010101010101001010101";

int main()
{
    int ans=0;

    int i=0;
    while(line[i]!='\0')
    {
        if (line[i]=='1')
        {
            ans++;
        }
        i++;
    }

    printf("¦³%d­Ó1",ans);
}
