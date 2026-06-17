#include <stdio.h>
#include <stdint.h>

void double_it(int32_t *p){

    *p = *p * 2;

}


int main(){

    int32_t num = 7;

    double_it(&num);

    printf("doubled the value of the num = %d\n",num);

    return 0;

}