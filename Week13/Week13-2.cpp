#include <stdio.h> ///為了printf()函式
#include <stdlib.h> ///為了system作業系統呼叫

int main() ///main()函式
{
    printf("下面會秀出 system()函式結果\n");
    system("dir");
    printf("Hello World");
}
