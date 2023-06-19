#include <DHT.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266HTTPClient.h>

#define DHTPIN 2

const char* API = "RLOG449K2FWWKMSV";
const char* URL = "http://api.thingspeak.com/update?api_key";
const char* ssid = "Ohayooo";
const char* pass = "09876543";

DHT dht(DHTPIN, DHT11);

HTTPClient http;
WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(10);
  dht.begin();

  Serial.println("Connecting to");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}

void loop() {
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor");
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" degree Celcius\n Humidity: ");
  Serial.print(h);
  Serial.println("%. Send to ThingSpeak.");

  ThingSpeak(t, h);
}

void ThingSpeak(float t, float h) {
  String url = String(URL) + "=" + String(API) + "&field1=" + String(t) + "&field2=" + String(h);

  http.begin(client, url);
  int httpCode = http.GET();

  if (httpCode == HTTP_CODE_OK) {
    Serial.println("Data sent successfully");
  }
  else {
    Serial.println("Error in sending");
  }
  http.end();
}
