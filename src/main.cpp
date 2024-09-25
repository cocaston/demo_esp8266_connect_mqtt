#include <Arduino.h>
#include <memory>
#include "esp8266.h"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  std::shared_ptr<Board> board = 
    std::make_shared<Board>("coco", "woaikeke521tk");
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Hello World!\n");
}
