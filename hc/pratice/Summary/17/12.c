#include <stdio.h>

int main(int argc, char *argv[])
{
    while(1)
    {
        fprintf(stdout, "Group ");
        fprintf(stderr, "XiyouLinux");
        getchar();
    }
return 0;
}
//             stderr 与 stdout
//stderr是标准错误stdout是标准输出，两个都是指向显示器
//linux下stdout是行缓冲的，只有遇到换行的时候，才会输出到屏幕上
//  stderr是没有缓冲的，直接输出
//window下stdout与stderr都没有缓冲
