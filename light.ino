#include <ESP8266WiFi.h>

#include <ThingSpeak.h>

WiFiClient client;

void setup()
{
  Serial.begin(9600);
ThingSpeak.begin(client);

pinMode(16, OUTPUT);
  WiFi.disconnect();
   WiFi.begin("<name of the network>","<password>");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.println("................");

  }
  Serial.println("Connected!");
  Serial.println((WiFi.localIP().toString()));

}


void loop()
{

    a = (ThingSpeak.readIntField("<Enter the channel number in int format>",1,"<Thingspeak Read API key>"));
    Serial.println(a);
    if (a == "on") {
      digitalWrite(16,LOW);

    } else if (a == "off") {
      digitalWrite(16,HIGH);
    }

}
