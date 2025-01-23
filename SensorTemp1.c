#include "stdio.h"
#include "SensorTemp1.h"

int tSensorInit(void)
{
    printf("Initializing Temperature sensor 1...\n");
    /* Implemantacion para inicializar el sensor 1 de temperatura*/
}

int tGetTemperature(void)
{
    int mValue = 40;
    printf("Get Temperature from sensor1 = %d\n", mValue);
    /* Implemantacion para obtener temperatura del sensor 1*/
    return mValue;
}