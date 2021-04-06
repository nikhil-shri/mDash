// Minimal Arduino sketch for mdash.net
//
// - Install mDash library:
//   - Select "Sketch" &rarr; "Include Library" &rarr; "Manage Libraries"
//   - In the search field, type "mDash" and press Enter
//   - Click on "Install" to install the library
// - Select "Tools" → "Board" → "ESP32 Dev Module"
// - Select "Tools" → "Partitioning Scheme" → "Minimal SPIFFS"
// - Select "Tools" → "Port" → your serial port
// - Click on "Upload" button to build and flash the firmware
//
// See https://mdash.net/docs/ for the full IoT product reference impementation

#define MDASH_APP_NAME "device1"
#include <mDash.h>

#include <WiFi.h>

#define WIFI_NETWORK "ROGPHONE2"
#define WIFI_PASSWORD "Nikhil555"
#define DEVICE_PASSWORD "DEVICEID"

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);
  mDashBegin(DEVICE_PASSWORD);
  pinMode(2, OUTPUT);
}

void loop() {
  delay(100);
  digitalWrite(2, HIGH);  
  delay(100);                       
  digitalWrite(2, LOW); 
  delay(100);  
}
