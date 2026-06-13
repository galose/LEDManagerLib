#ifndef BLINK_LED_H
#define BLINK_LED_H

#include "LEDManager.h"


class BlinkLED {
public:
    BlinkLED(LEDManager &manager);
    void cycle();

private:
    LEDManager &_manager;
};

#endif
