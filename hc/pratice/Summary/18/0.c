#include <stdio.h>
#define P(N)  N+N
#define Q(A)  (A+A)
int main()
{
    printf("%d\n",P(2)*P(2));
    printf("%d\n",Q(2)*Q(2));

    return 0;
}

