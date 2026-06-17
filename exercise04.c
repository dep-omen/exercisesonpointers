#include <stdio.h>
#include <stdint.h>
#include <string.h>

void display(int32_t *p, int32_t size){

    for(int32_t i = 0; i < size;i++){

        printf("%d\n",*p);
        p++;

    }

}

int main(){

    int32_t arr[5] = {10, 20, 30, 40, 50};

    int32_t size = sizeof(arr)/sizeof(arr[0]);

    display(arr, size);

    return 0;

}