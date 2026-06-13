#include <LEDManagerLib.h>

LEDManager leds(2, 3, 4);   // Example pins

void setup() {
    leds.begin();
}

void loop() {
    // Simulate a status condition
    bool systemOK = true;   // Change to false to test error blink

    if (systemOK) {
        leds.setGreenBlink(1000);   // Slow heartbeat
    } else {
        leds.setRedBlink(200);      // Fast error blink
    }

    leds.update();   // Non‑blocking update
}
