#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(){

    int32_t num = 777;

    void *vp = &num; 

    printf("Num is %d\n",*(int32_t *)vp);

    *(int32_t *)vp = 888;

    printf("Now num is %d\n",num);

    return 0;

}