#include "stdio.h"
#include "SensorTemp1.h"

int tSensorInit(void)
{
    printf("Initializing Temperature sensor 1...\n");
    /* Implemantacion para inicializar el sensor 1 de temperatura*/
    /*Linea 1*/
}

int tGetTemperature(void)
{
    int mValue = 40;
    printf("Get Temperature from sensor1 = %d\n", mValue);
    /* Implemantacion para obtener temperatura del sensor 1*/
    return mValue;
}

float celsiustoFarenheit(float cTemperature){
        printf("Changing from Celsius to Farenheit value\n");
    /* Implemantacion para cambiar la unidades de la temperatura*/

}
