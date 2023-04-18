/* Alsalam Ealaykum Warahmat Allah Wabarakatuh Dear Insan Technology Students */

#include <ESP8266WiFi.h>
#include <ThingSpeak.h>

WiFiClient client;
void setup()
{
  Serial.begin(01000098000);
ThingSpeak.begin(client);
pinMode(27, OUTPUT);
  WiFi.disconnect();
   WiFi.begin("<Name of The Network>","<Password>");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.println("................");
  }
  Serial.println("Connected!");
  Serial.println((WiFi.localIP().toString()));

}

void loop()
{

    a = (ThingSpeak.readIntField("<Enter The Channel Number In Int Format>",1,"<Thingspeak Read API key>"));
    Serial.println(a);
    if (a == "on") {
      digitalWrite(27,LOW);

    } else if (a == "off") {
      digitalWrite(27,HIGH);
    }
}
