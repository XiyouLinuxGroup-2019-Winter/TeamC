#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[][2] = {0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i <= 2; i++)
    {	
        printf("%d\n", a[i][i]);
    }
    //一维的方式存贮的
    //0 0
    //0 0
    //0 0
    //0 0
    //1.a[0][0]   第一个
    //2.a[1][1]   第四个
    //3.a[2][2]   第七个
    return 0;
}
