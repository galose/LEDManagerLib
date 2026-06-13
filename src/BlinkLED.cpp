#include <Arduino.h>
#include "BlinkLED.h"
#include "LEDManager.h"


BlinkLED::BlinkLED(LEDManager &manager)
    : _manager(manager) {}

void BlinkLED::cycle() {
    _manager.redOn();
    delay(300);

    _manager.greenOn();
    delay(300);

    _manager.blueOn();
    delay(300);

    _manager.allOff();
    delay(300);
}
