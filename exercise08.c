#include <stdio.h>
#include <stdint.h>
#include <string.h>

void say_hello(void){

    printf("Hello!\n");

}

void say_goodbye(void){

    printf("Goodbye!\n");

}

int main(){

    void (*fp)(void);
    fp = say_hello;
    fp();
    fp = say_goodbye;
    fp();

    return 0;

}