#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t a =63002; //1111011000011010
    uint16_t d=0;
    a=a|(1<<31);
    a=a|(1<<30);
    a=a|(1<<15);
    a=a|(1<<16);
    a=a|(1<<17);
    a=a|(1<<18);
    a=a|(1<<19);
    printf("a=%d\n",a);
   
}