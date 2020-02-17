#include <stdio.h>
struct S1
{
	char _c1;
	int _i;
	char _c2;
};
int main()
{
    printf("%d\n",sizeof(struct S1));
    return 0;
}

