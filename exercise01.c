#include <stdio.h>
#include <stdint.h>

int main(){

    int32_t num = 99;

    int32_t *p = &num; 

    printf("num     = %d\n",num);
    printf("&num    = %p\n",(void *)&num);
    printf("p       = %p\n",(void *)p);
    printf("*p      = %d\n",*p);
    printf("\n");


    return 0;

}