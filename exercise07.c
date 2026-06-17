#include <stdio.h>
#include <stdint.h>
#include <string.h>

void redirect(int32_t **pp, int32_t *newtarget){

    *pp = newtarget;
        
}

int main(){

    int32_t a = 10;
    int32_t b = 20;
    
    int32_t *p = &a;
    printf("A's memory address  %p\n",(void *)&a);
    printf("P is pointing at memory address  %p\n",(void *)p);

    redirect(&p,&b);
    printf("B's  memory address  %p\n",(void *)&b);
    printf("P is pointing at memory address  %p\n",(void *)p);

    return 0;

}