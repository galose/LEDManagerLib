#include <LEDManagerLib.h>

LEDManager leds(2, 3, 4);   // Example pins

void setup() {
    leds.begin();
}

void loop() {
    leds.setRed(500);     // Red for 500ms
    leds.update();
    delay(500);

    leds.setGreen(500);   // Green for 500ms
    leds.update();
    delay(500);

    leds.setBlue(500);    // Blue for 500ms
    leds.update();
    delay(500);
}
