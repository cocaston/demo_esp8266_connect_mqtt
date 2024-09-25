#include "esp8266.h"

Board::Board(char* ssid, char* passwd)
: _ssid(ssid), _passwd(passwd)
{
    if(!WifiInit())
    {
        
    }
}

bool Board::WifiInit()
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(_ssid, _passwd);
    Serial.print("connect to ");
    Serial.println(_ssid);
    while(WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("Wifi connect Successed!");
    return true;
}