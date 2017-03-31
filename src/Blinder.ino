/*
 * Project Blinder
 * Description:
 * Author:
 * Date:
 */

#include <Adafruit_mfGFX.h>
#include <Adafruit_ILI9341.h>
#include <Stepper.h>

#define STEPS 200

Adafruit_ILI9341 tft = Adafruit_ILI9341(A2, A1, A0);

Stepper stepper(STEPS, D0, D1, D2, D3);

// setup() runs once, when the device is first turned on.
void setup() {
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setCursor(0, 0);
	tft.setTextColor(ILI9341_GREEN);  tft.setTextSize(2);
	tft.println("Starting Motor");
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  stepper.step(STEPS);
  delay(500);
}
