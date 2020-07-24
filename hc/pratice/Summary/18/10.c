#include<stdio.h>
#define YEAR 2018
#define LEVELONE(x) "XiyouLinux "#x"\n"
#define LEVELTWO(x) LEVELONE(x)
#define MULTIPLY(x,y) x*y
int main(int argc , char *argv[])
{
    int x = MULTIPLY(1 + 2, 3);
    printf("%d\n", x);  //7
    printf(LEVELONE(YEAR));
    //LEVELONE(YEAR)中，第一次的替换中存在#，所以直接输出XiyouLinux YEAR

    printf(LEVELTWO(YEAR));
    return 0;
}
//这里并不是一样的输出，因为存在#和##运算符 
//1 .当宏中有#运算符时，参数不再被展开
//2 .当宏中有##运算符时，则先展开函数，再展开里面的参数

