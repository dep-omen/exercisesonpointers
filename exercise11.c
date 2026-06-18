#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef enum{

    SENSOR_OFF,
    SENSOR_IDLE,
    SENSOR_ERROR,
    SENSOR_ACTIVE,

}SensorState;


typedef struct{

    int32_t id;
    float value;
    SensorState state;

}Sensor;

void handle_off(Sensor *s);
void handle_idle(Sensor *s);
void handle_error(Sensor *s);
void handle_active(Sensor *s);
void (*handler[])(Sensor *) = {handle_off, handle_idle, handle_error, handle_active};
void run(Sensor *s);

void handle_off(Sensor *s){

    printf("[OFF]   Sensor %d   value: %f\n",s->id,s->value);

}

void handle_idle(Sensor *s){

    printf("[IDLE]  Sensor %d   value: %f\n",s->id,s->value);

}

void handle_active(Sensor *s){

    printf("[ACTIVE]Sensor %d   value: %f\n",s->id,s->value);

}

void handle_error(Sensor *s){

    printf("[ERROR] Sensor %d   value: %f\n",s->id,s->value);

}

void run(Sensor *s){

    handler[s->state](s);

}

int main(){


    int32_t i = 0;

    Sensor s[1];

    s[i].id = 001;
    s[i].state = SENSOR_OFF;
    s[i].value = 0;

    run(s);


    s[i].id = 001;
    s[i].state = SENSOR_IDLE;
    s[i].value = 0;

    run(s);


    s[i].id = 001;
    s[i].state = SENSOR_ERROR;
    s[i].value = 200;

    run(s);


    s[i].id = 001;
    s[i].state = SENSOR_ACTIVE;
    s[i].value = 50;

    run(s);

    return 0;
}