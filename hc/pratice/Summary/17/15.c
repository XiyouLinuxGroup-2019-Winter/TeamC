#ifdef __linux__
    int a = 1;
#elif _WIN32
    int a = 2;
#elif __APPLE__
    int a = 3;
#else
    int a = 4;
#endif
#include <stdio.h>

int main()
{
    printf("%d\n",a);
    return 0;
}
// 防止多平台编译时，相互影响

