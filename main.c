#include "stdio.h"
#include "SensorHumedad1.h"
#include "Valve1.h"

#define HHSETPOINT 60u //porcentaje
#define HLSETPOINT 20U //porcentaje

int main(void)
{
    int Humidity = 0;
    printf("Initializing System...\n");
    (void)hSensorInit();
    (void)valveInit();

    Humidity = hGetHumidity();

    if ( (Humidity >= HLSETPOINT) && (Humidity <= HHSETPOINT) )
    {
        printf("Valve activated....\n");
        valveSet(1);
    }else{
        /*nothing to do*/
    }

    return 0;
}