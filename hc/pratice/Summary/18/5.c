#include <stdio.h>

int main()
{
    char y[ ] = "XiyouLinuxGroup", x[ ] = "2018";
    char *const p1 = y;
    const char *p2 = y;
/*   
     p1 = x;      
     p2 = x;      
    *p1 = 'x';    
    *p2 = 'x';
*/
    return 0;
}
//const在*后面，说明指针变量不能改变
//const在*前面，说明指针所指向的地址里面的值不能变
