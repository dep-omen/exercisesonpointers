#include <stdio.h>
#include <stdint.h>
#include <string.h>

void add_tax(int32_t *price){

    *price *= 2;    

}

void apply_discount(int32_t *price){

    *price -= 10;

}

void apply(int32_t *price, void (*operation)(int32_t *)){
   
    operation(price);
}

int main(){


    int32_t price = 100;

    apply(&price,add_tax);
    printf("Price with tax --> %d\n",price);

    apply(&price,apply_discount);
    printf("Price with discount --> %d\n",price);

    return 0;

}