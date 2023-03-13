#include <iostream>
#include "utils.h"

int main()
{

    // TODO - write name to screen
    for (int n=10; n>=0; n--);
    {
        printf("Hello World\n");
    }

    int aa = 2;
    int bb = 3;

    int y = add(aa,bb);

    int prod = mul(aa,bb);
    
    return 0;
}