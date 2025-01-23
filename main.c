#include "stdio.h"
#include "SensorHumedad1.h"
#include "Valve1.h"
#include "SensorTemp1.h"
#include "ACFunction1.h"

#define HHSETPOINT 60u //porcentaje
#define HLSETPOINT 20U //porcentaje
#define TSETPOINT 30 //grados_celsius

int main(void)
{
    int Temperature = 0;
    int Humidity = 0;
    printf("Initializing System...\n");
    (void)hSensorInit();
    (void)tSensorInit();
    (void)valveInit();
    (void)acInit();

    Humidity = hGetHumidity();
    Temperature = tGetTemperature();

    if ( ( (Humidity >= HLSETPOINT) && (Humidity <= HHSETPOINT) ) || (Temperature > TSETPOINT) )
    {
        printf("Valve activated....\n");
        valveSet(1);
        printf("AC activated...\n");
        acSet(1);
    }else{
        /*nothing to do*/
    }

    return 0;
}