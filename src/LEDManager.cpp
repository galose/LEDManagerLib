#include "LEDManager.h"

LEDManager::LEDManager(int redPin, int greenPin, int bluePin)
    : _redPin(redPin), _greenPin(greenPin), _bluePin(bluePin) {}

void LEDManager::begin() {
    pinMode(_redPin, OUTPUT);
    pinMode(_greenPin, OUTPUT);
    pinMode(_bluePin, OUTPUT);

    allOff();
}

void LEDManager::redOn() {
    allOff();
    digitalWrite(_redPin, LOW);
}

void LEDManager::greenOn() {
    allOff();
    digitalWrite(_greenPin, LOW);
}

void LEDManager::blueOn() {
    allOff();
    digitalWrite(_bluePin, LOW);
}

void LEDManager::allOff() {
    digitalWrite(_redPin, HIGH);
    digitalWrite(_greenPin, HIGH);
    digitalWrite(_bluePin, HIGH);
}
