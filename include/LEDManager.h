#ifndef LED_MANAGER_H
#define LED_MANAGER_H

#include <Arduino.h>

class LEDManager {
public:
    LEDManager(int redPin, int greenPin, int bluePin);

    void begin();
    void redOn();
    void greenOn();
    void blueOn();
    void allOff();

private:
    int _redPin;
    int _greenPin;
    int _bluePin;
};

#endif
