**DHT11 Temperature and Humidity Monitoring**

This project aims to monitor temperature and humidity using the DHT11 sensor and an ESP8266-based development board. The collected data is then sent to ThingSpeak for visualization and analysis.

**Features**
-Reads temperature and humidity values from the DHT11 sensor.
-Connects to Wi-Fi using the ESP8266 board.
-Sends data to ThingSpeak for storage and visualization.
-Uses the Arduino framework and libraries for programming.

**Getting Started**
**Prerequisites**
Arduino IDE: Install the latest version of the Arduino IDE from the official Arduino website (https://www.arduino.cc/en/software).
Libraries: Install the following libraries in the Arduino IDE using the Library Manager (Sketch -> Include Library -> Manage Libraries):
DHT Sensor Library: Library for interfacing with DHT sensors.
ESP8266WiFi Library: Library for ESP8266 Wi-Fi functionality.
WiFiClient Library: Library for creating a Wi-Fi client.
ESP8266HTTPClient Library: Library for making HTTP requests.
Installation
Clone the repository or download the project files.


Open the Arduino IDE.

Connect your ESP8266 development board to your computer.

In the Arduino IDE, open the project folder containing the .ino file.

Compile and upload the code to your ESP8266 board.

Configuration
Open the .ino file in the Arduino IDE.

Modify the following constants according to your setup:

DHTPIN: The GPIO pin number to which the DHT11 sensor is connected.
API: Your ThingSpeak API key.
SSID and PASSWORD: Your Wi-Fi network credentials.
Save the changes.

**Usage**
Connect the DHT11 sensor to the designated GPIO pin on your ESP8266 board.

Power up the board.

The ESP8266 board will connect to the Wi-Fi network.

The temperature and humidity data will be read from the DHT11 sensor and sent to ThingSpeak.

Access your ThingSpeak channel to view and analyze the collected data.

**Acknowledgments**
DHT Sensor Library
ESP8266WiFi Library
WiFiClient Library
ESP8266HTTPClient Library






Regenerate response
