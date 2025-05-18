#include <stdio.h>
int main()
{
    int x = 3, y = 3, z = 2;
    z += x < y ? x++ : y++;
    printf("%d\t%d\t%d\n", x, y, z);
    printf("%d\t%d\t%d\n", x, y, z);
    return 0;
}
