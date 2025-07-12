#include <DHT.h>
#include <DHT_U.h>

#define Type DHT11
int sensePin = 2;

DHT HT(sensePin, Type);  // constructor to create DHT object

float humidity;
float tempC;
float tempF;
float tempK;
int delayTime = 30000;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  HT.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempK = tempC + 273.15;

  Serial.print("Temperature(C): ");
  Serial.println(tempC);
  Serial.print("Temperature(F): ");
  Serial.println(HT.convertCtoF(tempC));
  Serial.print("Temperature(K): ");
  Serial.println(tempK);
  Serial.print("Humidity: ");
  Serial.println(humidity);

  delay(delayTime);
}
