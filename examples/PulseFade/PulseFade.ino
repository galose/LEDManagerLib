#include <LEDManagerLib.h>

LEDManager leds(2, 3, 4);   // Example pins

int brightness = 0;
int fadeAmount = 5;

void setup() {
    leds.begin();
}

void loop() {
    // Smooth breathing effect on the green LED
    leds.setGreenBrightness(brightness);
    leds.update();

    brightness += fadeAmount;

    // Reverse direction at limits
    if (brightness <= 0 || brightness >= 255) {
        fadeAmount = -fadeAmount;
    }

    delay(20);   // Controls breathing speed
}
