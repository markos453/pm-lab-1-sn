#include <Arduino.h>

#define LED_RED

#define M_KROPA_T 200
#define M_KRESKA_T 3 * M_KKROPA_T
#define M_PAUZA_T 3 * M_KKROPA_T
#define M_SPACJA_T 7 * M_KROPKA_T

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  for (int i =0; i < 3; i++)
  {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(M_KKROPA_T);
  digitalWrite(LED_BUILTIN, LOW);
  delay(M_PAUZA_T);
  }
  for (int i =0; i < 3; i++)
  {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(M_KRESKA_T);
  digitalWrite(LED_BUILTIN, LOW);
  delay(M_PAUZA_T);
  }
   for (int i =0; i < 3; i++)
   {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(M_KRESKA_T);
  digitalWrite(LED_BUILTIN, LOW);
  delay(M_PAUZA_T);
   }
   delay(M_SPACJA_T);
}