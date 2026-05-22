#include <SHTSensor.h>
#include <Wire.h>

SHTSensor sht;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  sht.init();
  sht.setAccuracy(SHTSensor::SHT_ACCURACY_HIGH);
}

void loop() {
  sht.readSample();
  float temp = sht.getTemperature();
  float hum = sht.getHumidity();
  Serial.print(temp);
  Serial.print(hum);

}
