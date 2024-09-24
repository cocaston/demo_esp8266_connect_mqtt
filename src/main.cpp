#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// put function declarations here:
int myFunction(int, int);

void wifiInit(void)
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
}

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Hello World!\n");

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}