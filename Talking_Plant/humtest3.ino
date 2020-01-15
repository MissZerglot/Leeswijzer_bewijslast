#include "DHT.h" 
#define dht_apin 8 // Analog Pin sensor is connected to
 
DHT dht(8,DHT11);

const int ledPin = 8;
const int ldrPin = A5;

void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  pinMode(dht_apin, INPUT);
  dht.begin();
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
   // Serial.println(dht.read11(dht_apin));

    float temp = dht.readHumidity();
    Serial.print("Current humidity = ");
    Serial.print(temp);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(dht.readTemperature()); 
    Serial.println("C  ");
    
    delay(1000);//Wait 1 seconds before accessing sensor again.
 
  //Fastest should be once every two seconds.
  int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 0) {

digitalWrite(ledPin, HIGH);

Serial.print("Its DARK, please put me in the sunlight.");

Serial.println(ldrStatus);
delay(1000);//Wait 1 seconds before accessing sensor again.

}
if (ldrStatus >= 5)
{
  digitalWrite(ledPin, HIGH);

  Serial.print("Its TOO BRIGHT, please stop.");

  Serial.println(ldrStatus);
  delay(1000);//Wait 1 seconds before accessing sensor again.
}
if (ldrStatus >= 1 && ldrStatus <= 3) {

digitalWrite(ledPin, LOW);

Serial.print("This is perfect, thank you.");

Serial.println(ldrStatus);
delay(1000);//Wait 1 seconds before accessing sensor again.

}
 
}// end loop() 
