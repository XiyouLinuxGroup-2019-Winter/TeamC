#include <stdio.h>

int main(int argc ,char *argv[])
{
    FILE *fp = fopen("Linux.txt","wb");
    long long a = 0x78756e694c;
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
    return 0;
}
//以小端模式存储
//0x4c 0x69 0x6e 0x75 0x78
// L    i    n    u    x
