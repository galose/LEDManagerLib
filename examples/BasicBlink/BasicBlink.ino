#include <LEDManagerLib.h>

LEDManager leds(2, 3, 4);   // Example pins

void setup() {
    leds.begin();
}

void loop() {
    leds.setGreenBlink(500);   // Blink green every 500ms
    leds.update();             // Non‑blocking update
}
