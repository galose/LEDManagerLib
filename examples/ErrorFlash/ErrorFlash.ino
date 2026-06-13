#include <LEDManagerLib.h>

LEDManager leds(2, 3, 4);   // Example pins

void setup() {
    leds.begin();
}

void loop() {
    // Triple red flash pattern
    leds.setRed(150);
    leds.update();
    delay(150);

    leds.setOff();
    leds.update();
    delay(150);

    leds.setRed(150);
    leds.update();
    delay(150);

    leds.setOff();
    leds.update();
    delay(150);

    leds.setRed(150);
    leds.update();
    delay(150);

    // Pause before repeating
    leds.setOff();
    leds.update();
    delay(600);
}
