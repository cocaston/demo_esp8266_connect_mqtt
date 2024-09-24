#include <string>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

class Board
{
public:
    Board(std::string& ssid, std::string& passwd);
    ~Board();

    bool WifiInit();
    bool BtnPressed();
    void LEDSetting();

private:
    std::string _ssid;
    std::string _passwd;
};