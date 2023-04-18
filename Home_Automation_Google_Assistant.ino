#define BLYNK_TEMPLATE_ID "TMPL3WTQBFnfv"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "IeOxLpDn1WXL_Cyi1iKgOYnSgc_jdDuu"
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "Redmi K20 Pro";
char pass[] = "Soumyadeep";

BLYNK_WRITE(V0)
{
  int value=param.asInt();
  Serial.println(value);
  if(value==1)
  {
    Serial.println("on");
    digitalWrite(D5,LOW);
  }
  if(value==0)
  {
    Serial.println("off");
    digitalWrite(D5,HIGH);
  }
}
BLYNK_WRITE(V1)
{
  int value=param.asInt();
  Serial.println(value);
  if(value==1)
  {
    Serial.println("on");
    digitalWrite(D6,LOW);
  }
  if(value==0)
  {
    Serial.println("off");
    digitalWrite(D6,HIGH);
  }
}
BLYNK_WRITE(V2)
{
  int value=param.asInt();
  Serial.println(value);
  if(value==1)
  {
    Serial.println("on");
    digitalWrite(D7,LOW);
  }
  if(value==0)
  {
    Serial.println("off");
    digitalWrite(D7,HIGH);
  }
}
BLYNK_WRITE(V3)
{
  int value=param.asInt();
  Serial.println(value);
  if(value==1)
  {
    Serial.println("on");
    digitalWrite(D8,LOW);
  }
  if(value==0)
  {
    Serial.println("off");
    digitalWrite(D8,HIGH);
  }
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
}

void loop()
{
  Blynk.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}
