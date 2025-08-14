#include <stdio.h>

void app_main(void)
{
    printf("hello_world!\n");
    fflush(stdout);//important in QEMU to flush the output
}
