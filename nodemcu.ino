#include <ESP8266WiFi.h>
//#define soil_moisture_pin A0

const char* ssid = "YUHAN";
const char* password = "coronavirus2020";

const int buzzerPin = 4; // Use GPIO4 (D2 on ESP8266)

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);

  Serial.begin(115200);
  Serial.println();
  Serial.print("Connecting to WiFi: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("NodeMCU IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  tone(buzzerPin, 1000); // 1000 Hz tone
  delay(500);           // 1 second
  noTone(buzzerPin);     // Stop the tone
  delay(100);           // 1 second

  digitalWrite(D3, HIGH);
  tone(buzzerPin, 1000); // 1000 Hz tone
  delay(500);
  digitalWrite(D3, LOW);
  noTone(buzzerPin);
  delay(100);
  digitalWrite(D4, HIGH);
  tone(buzzerPin, 1000);
  delay(500);
  digitalWrite(D4, LOW);
  noTone(buzzerPin);
  delay(100);
  digitalWrite(D5, HIGH);
  tone(buzzerPin, 1000);
  delay(500);
  digitalWrite(D5, LOW);
  noTone(buzzerPin);
  delay(100);
//
//  int soilMoistureValue = analogRead(soil_moisture_pin);
//  Serial.print("Soil Moisture Value: ");
//  Serial.println(soilMoistureValue);
//
//  if (soilMoistureValue < 300) {
//    Serial.println("Soil is dry");
//    tone(buzzerPin, 1000); // 1000 Hz tone
//    delay(50);           // 1 second
//    noTone(buzzerPin);     // Stop the tone
//    delay(50); 
//  } else if (soilMoistureValue > 700) {
//    Serial.println("Soil is wet");
//     
//  } else {
//    Serial.println("Soil is optimal");
//  }
//
//  delay(500);
}
