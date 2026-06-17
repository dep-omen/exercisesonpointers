#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(){

    int32_t num = 99;
    int32_t *p = &num;
    int32_t **pp = &p;

    printf("num     = %d \n",num);
    printf("*p      = %d \n",*p);
    printf("**pp    = %d \n",(*(*pp)));
    printf("The address stored in p is %p \n",(void *)p);
    printf("The address stored in pp is %p \n",(void *)pp);


    return 0;

}