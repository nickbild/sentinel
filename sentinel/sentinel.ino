#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define ledPin     6
#define trigPin    9
#define echoPin    10
#define minDist    30

Adafruit_NeoPixel pixels(1, ledPin, NEO_GRB + NEO_KHZ800);

float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);

  pixels.begin();
}

void loop() {
  distance = getDistanceInCm();
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < minDist) {
    flashLED();
  }
  
  delay(100);
}

float getDistanceInCm() {
  float duration, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;

  return distance;
}

void flashLED() {
  pixels.setPixelColor(0, pixels.Color(25, 0, 0));
    pixels.show();
    
    delay(2000);

    pixels.setPixelColor(0, pixels.Color(0, 0, 0));
    pixels.show();
}
