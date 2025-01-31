#include "DHT.h"
#define Type DHT11
#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int sensePin=2;
DHT HT(sensePin,Type);
int humidity;
int setTime=500;
int dt=1000;
void setup() {

 8
Serial.begin(9600);
HT.begin();
delay(setTime);
lcd.begin(16,2);
}
void loop() {
humidity=HT.readHumidity();
lcd.setCursor(0,0);
lcd.print("Humidity Sensor");
lcd.setCursor(0,1);
lcd.print("21BEC071,21BEC88");
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Humidity:");
lcd.print(humidity);
lcd.print("%");
lcd.setCursor(0,1);
lcd.print(" Thank You ");
delay(2000);
lcd.clear();
}
