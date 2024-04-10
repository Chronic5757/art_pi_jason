#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"

#define LED_PIN GET_PIN(I, 8)
static void toggleDebugLed(void);
#endif

Model::Model() :
    modelListener(0)
{

}   

void Model::tick()
{

#ifndef SIMULATOR
    toggleDebugLed();
    modelListener->toggleLed();
#endif
}



#ifndef SIMULATOR
static void toggleDebugLed(void)
{
    rt_uint32_t swichstate = rt_pin_read(LED_PIN);
    if (swichstate == PIN_HIGH)
    {
        rt_pin_write(LED_PIN, PIN_LOW);
        rt_thread_mdelay(500);
    }
    else
    {
        rt_pin_write(LED_PIN, PIN_HIGH);
        rt_thread_mdelay(500);

    }
}
#endif
