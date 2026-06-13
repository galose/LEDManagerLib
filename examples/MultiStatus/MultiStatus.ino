#include <LEDManagerLib.h>

LEDManager leds(2, 3, 4);   // Example pins

// 0 = OK, 1 = Warning, 2 = Error
int status = 0;
unsigned long lastChange = 0;

void setup() {
    leds.begin();
}

void loop() {
    // Rotate status every 5 seconds
    if (millis() - lastChange > 5000) {
        status = (status + 1) % 3;
        lastChange = millis();
    }

    switch (status) {
        case 0:   // OK
            leds.setGreenBlink(1000);   // Slow heartbeat
            break;

        case 1:   // Warning
            leds.setYellowBlink(400);   // Medium blink
            break;

        case 2:   // Error
            leds.setRedBlink(150);      // Fast blink
            break;
    }

    leds.update();   // Non‑blocking update
}
