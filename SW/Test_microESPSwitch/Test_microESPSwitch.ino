/* Test code for LaskaKit microESPswitch
 * 
 * Board:   LaskaKit microESPswitch (ESP32C3 Dev Module) https://www.laskakit.cz/laskakit-esp32-devkit/
 * 
 * Library: by Adafruit         https://github.com/adafruit/Adafruit_NeoPixel
 *
 * Email:podpora@laskakit.cz
 * Web:laskakit.cz
 */

#include <Adafruit_NeoPixel.h>

#define LED_PIN     21     // LED GPIO on Laskakit ESPswitch board
#define CH0_PIN     0     // Channel 0 GPIO on Laskakit ESPswitch board
#define CH1_PIN     1     // Channel 1 GPIO on Laskakit ESPswitch board
#define CH2_PIN     4     // Channel 2 GPIO on Laskakit ESPswitch board

#define CH_USED     CH2_PIN

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);

  ledcAttach(CH_USED, 200, 8); 
  
  pixels.begin();
  pixels.setBrightness(10);
}

void loop() {

  Serial.println("Start");

  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // R, G, B
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 255, 0)); // R, G, B
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 0, 255)); // R, G, B
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(255, 255, 255)); // R, G, B
  pixels.show();

  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(CH_USED, dutyCycle);
    delay(15);
  }

  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(CH_USED, dutyCycle);
    delay(15);
  }
  
  delay(1000);
}
