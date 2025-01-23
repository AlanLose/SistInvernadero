#include "stdio.h"
#include "SensorHumedad1.h"
#include "Valve1.h"

#define SETPOINT 60u //porcentaje
int main(void)
{
    int Humidity = 0;
    printf("Initializing System...\n");
    (void)hSensorInit();
    (void)valveInit();

    Humidity = hGetHumidity();

    if(Humidity < SETPOINT)
    {
        printf("Valve activated....\n");
        valveSet(1);
    }else{
        /*nothing to do*/
    }

    return 0;
}