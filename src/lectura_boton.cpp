#include <Arduino.h>

bool estaBotonPresionado(int pin) {
    return digitalRead(pin) == HIGH;
}