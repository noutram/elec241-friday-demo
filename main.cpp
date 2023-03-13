#include <iostream>
#include "utils.h"

int main()
{

    // TODO - write name to screen
    for (int n = 10; n >= 0; n--)
    {
        printf("Hello World\n");
    }

    int zz = 2;
    int bb = 3;
    int cc = 5;
    int dd = 1;

    int y = add(zz, bb);
    int z = sub(cc, dd);
    int prod = mul(zz, bb);

    return 0;
}
