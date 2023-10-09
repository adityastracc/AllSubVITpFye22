#include <ESP8266WiFi.h>

WiFiClient client;
WiFiServer server(80);
# define LED_Red D5
# define LED_Yellow D6
# define LED_Green D7
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
WiFi.begin("Galaxy M317509","tzoh1462");
while(WiFi.status() !=WL_CONNECTED)
{delay(500);
Serial.print(".");
}
Serial.println();
Serial.println("NodeMCU is Connected");
Serial.println(WiFi.localIP());
server.begin();
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Yellow, OUTPUT);
  pinMode(LED_Green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
client=server.available();
if(client==1)
{
  String request =client.readStringUntil('\n');
  Serial.println(request);
  request.trim();
  if(request =="GET /LED_Red HTTP/1.1")
  {
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Yellow, LOW);
    digitalWrite(LED_Green, LOW);
  }
  if(request =="GET /LED_Yellow HTTP/1.1")
  {
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Yellow, HIGH);
    digitalWrite(LED_Green, LOW);
  }
  if(request =="GET /LED_Green HTTP/1.1")
  {
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Yellow, LOW);
    digitalWrite(LED_Green, HIGH);
  }
  }
}
