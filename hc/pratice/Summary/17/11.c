#include <stdio.h>


int main(int argc, char *argv[])
{
    int nums[5] = {2, 4, 6, 8, 10};
    int *ptr = (int *)(&nums+1);
    printf("%d, %d\n", *(nums+1), *(ptr-1));
    return 0;
}
//4, 10
// 由于&nums+1，这就相当于ptr指向的位置，为nums数组整体的后一个位置。
