#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    
    int a[3][2] = { 2, 0, 1, 8 }; 
    char *str = (char *)malloc(sizeof(char) * 20);
    strcpy(str,"\0101\\xb2");
    //%zu size_t型 也是unsigned int型
    printf("%zu\n", sizeof(a));   //24
    printf("%zu %d\n", sizeof(a[1][1] =0), a[1][1]);  //4  8
    printf("%zu %zu\n", sizeof(str), strlen(str));    //8 6
    //指针8个字节   
    return 0;
}
