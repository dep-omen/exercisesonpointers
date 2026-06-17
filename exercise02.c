#include <stdio.h>
#include <stdint.h>

int main(){

    int32_t num = 10;
    printf("num         = %d\n",num);

    int32_t *pnum = &num;
    *pnum = 50;
    printf("now num is  = %d\n",num);

    return 0;

}