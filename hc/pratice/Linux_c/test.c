#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char *name[10];
int main()
{
    const char *p = "asdas";
    name[0] = (char *)malloc(sizeof(char)*10);
    strcpy(name[0],p);
    printf("%s\n",name[0]);
    free(name[0]);
    printf("%s\n",name[0]);
    return 0;
}

