#define FW_NAME "Shelly 1"
#define FW_VERSION "1.0.0"

#include "Homie.h"
#include "RelayNode.hpp"

// high for closing relay
#define PIN_RELAY 4
// reads low when SW shortened to AC/L | GND
#define PIN_SWITCH 5

RelayNode relay("relay", PIN_RELAY);

void setup() {
  Serial.begin(115200);
  Serial << endl << endl;

  pinMode(PIN_RELAY, OUTPUT);

  Homie_setFirmware(FW_NAME, FW_VERSION);
  Homie.disableResetTrigger();
  Homie.disableLedFeedback();

  Homie.setup();
}

void loop() {
  Homie.loop();
}
