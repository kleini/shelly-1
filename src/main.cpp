#define FW_NAME "Shelly 1"
#define FW_VERSION "0.1.0"

#include "Homie.h"

// high for closing relay
#define PIN_RELAY 4
// reads low when SW shortened to AC/L | GND
#define PIN_SWITCH 5

void setup() {
  Serial.begin(115200);
  Serial << endl << endl;

  Homie_setFirmware(FW_NAME, FW_VERSION);
  Homie.disableResetTrigger();
  Homie.disableLedFeedback();

  Homie.setup();
}

void loop() {
  Homie.loop();
}
