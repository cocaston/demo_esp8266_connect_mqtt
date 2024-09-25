#include <string>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

class Board
{
public:
    Board(char* ssid, char* passwd);
    ~Board();

    bool WifiInit();
    bool BtnPressed();
    void LEDSetting();

private:
    char* _ssid;
    char* _passwd;
};