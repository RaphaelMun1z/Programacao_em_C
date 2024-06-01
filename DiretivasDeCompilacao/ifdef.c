#include <stdio.h>

#ifndef PI
    #define PI 3.1415
#endif

int main()
{
    #ifdef PI
        printf("PI: %.4f \n", PI);
    #endif

    return 0;
}