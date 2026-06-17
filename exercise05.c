#include <stdio.h>
#include <stdint.h>
#include <string.h>

void multiply_all(int32_t *p, int32_t size, int32_t factor){

    for(int32_t i = 0; i < size; i++){

        *p = *p * factor;
        p++;

    }

}
void display(int32_t *p, int32_t size){

    for(int32_t i = 0; i < size; i++){

        printf("%d ", *p);
        p++;

    }
    printf("\n");

}

int main(){

    int32_t arr[5] = {1, 2, 3, 4, 5};
    int32_t factor = 3;

    multiply_all(arr, 5, factor);
    display(arr, 5);
    
    return 0;

}