#include <stdio.h>

int main(int argc , char *argv[])
{
    int val = 2018;   //定义一个整型变量并初始化
    int *pi = 2019;   //定义一个指向整型的指针变量并初始化
    pi = &val;        //让pi这个指针指向val所在的地址
    *pi = 0;          //利用指针改变val地址里面存储的值
}
