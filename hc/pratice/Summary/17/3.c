#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char * get_str_01(char *ptr);
void get_str(char **ptr)
{
    *ptr = (char *)malloc(18);
    strcpy(*ptr,"Xiyou Linux Group");
}
// 我们需要打印的值是str的值，所以我们应该修改str所指的空间里面的东西.
// 原来的程序仅仅是将ptr的指向修改了，并没有改变str所指向的值.
// 所以传值的时候，应该传&str，而且传的是二级指针.
int main(int argc, char *argv[])
{
    char *str = NULL;
    get_str(&str);
    //str=get_str_01(str);
    printf("%s\n",str);
    free(str);
    return 0;
}

//或者可以这样修改将ptr最后返回给主函数中的str.
char* get_str_01(char *ptr)
{
    ptr = (char *)malloc(18);
    strcpy(ptr,"Xiyou Linux Group");
    return ptr;
}

