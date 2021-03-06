#include <ESP8266WiFi.h>

// Global Variables
const char *ssid         = "Wi-Fi Name";
const char *password     = "Wi-Fi Password";

void setup()
{
  Serial.begin(9600);
  Serial.println("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}

void loop()
{
  
}
