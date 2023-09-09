#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFi.h>
 
const char* ssid = "F9";
const char* password = "yanga123";

#define RELAY_PIN1 0 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN2 1 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN3 2 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN4 4 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN5 5 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN6 12 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN7 13 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN8 14// ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN9 15 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN10 16// ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN11 17 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN12 18// ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN13 19 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN14 20 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN15 21 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN16 22 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN17 23 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN18 24 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN19 25 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN20 26 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN21 27 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN22 32 // ESP32 pin GIOP27 connected to the IN pin of relay
#define RELAY_PIN23 33 // ESP32 pin GIOP27 connected to the IN pin of relay

  
void setup () {
  Serial.begin(115200);
  pinMode(RELAY_PIN1, OUTPUT);
  pinMode(RELAY_PIN2, OUTPUT);
  pinMode(RELAY_PIN3, OUTPUT);
  pinMode(RELAY_PIN4, OUTPUT);
  pinMode(RELAY_PIN5, OUTPUT);
  pinMode(RELAY_PIN6, OUTPUT);
  pinMode(RELAY_PIN7, OUTPUT);
  pinMode(RELAY_PIN8, OUTPUT);
  pinMode(RELAY_PIN9, OUTPUT);
  pinMode(RELAY_PIN10, OUTPUT);
  pinMode(RELAY_PIN11, OUTPUT);
  pinMode(RELAY_PIN12, OUTPUT);
  pinMode(RELAY_PIN13, OUTPUT);
  pinMode(RELAY_PIN14, OUTPUT);
  pinMode(RELAY_PIN15, OUTPUT);
  pinMode(RELAY_PIN16, OUTPUT);
  pinMode(RELAY_PIN17, OUTPUT);
  pinMode(RELAY_PIN18, OUTPUT);
  pinMode(RELAY_PIN19, OUTPUT);
  pinMode(RELAY_PIN20, OUTPUT);
  pinMode(RELAY_PIN21, OUTPUT);
  pinMode(RELAY_PIN22, OUTPUT);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print("Connecting..");
       }
}
 
void loop() {
    if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
    HTTPClient http;  //Declare an object of class HTTPClient
    http.begin("https://afrihome.000webhostapp.com/serve_receive.php");  //Specify request destination
    int httpCode = http.GET();                                  //Send the request 
    if (httpCode > 0) { //Check the returning code
      String payload = http.getString();   //Get the request response payload

      Serial.println(payload);//Print the response from server
     
      if(payload=="0-1")
        {
          digitalWrite(RELAY_PIN1, 0);
        }
      if(payload=="1-1")
        {
          digitalWrite(RELAY_PIN1, 1);
        }
      if(payload=="0-2")
        {
          digitalWrite(RELAY_PIN2, 0);
        }
       if(payload=="1-2")
        {
          digitalWrite(RELAY_PIN2, 1);
        }
       if(payload=="0-3")
        {
          digitalWrite(RELAY_PIN3, 0);
        }
      if(payload=="1-3")
        {
          digitalWrite(RELAY_PIN3, 1);
        }
       if(payload=="0-4")
        {
          digitalWrite(RELAY_PIN4, 0);
        }         
      if(payload=="1-4")
        {
          digitalWrite(RELAY_PIN4, 1);
        }
      if(payload=="0-5")
        {
          digitalWrite(RELAY_PIN5, 0);
        }
      if(payload=="1-5")
        {
          digitalWrite(RELAY_PIN6, 0);
        } 
       if(payload=="0-6")
        {
          digitalWrite(RELAY_PIN6, 0);
        }  
        if(payload=="1-6")
        {
          digitalWrite(RELAY_PIN6, 1);
        }  
        if(payload=="1-7")
        {
          digitalWrite(RELAY_PIN7, 1);
        }  
        if(payload=="0-7")
        {
          digitalWrite(RELAY_PIN7, 0);
        }  
        if(payload=="0-8")
        {
          digitalWrite(RELAY_PIN8, 0);
        }  
        if(payload=="1-8")
        {
          digitalWrite(RELAY_PIN8, 1);
        }  
        if(payload=="1-9")
        {
          digitalWrite(RELAY_PIN9, 1);
        }  
        if(payload=="0-9")
        {
          digitalWrite(RELAY_PIN9, 0);
        }  
        if(payload=="1-10")
        {
          digitalWrite(RELAY_PIN10, 1);
        }
        if(payload=="0-10")
        {
          digitalWrite(RELAY_PIN10, 0);
        }  
        if(payload=="1-11")
        {
          digitalWrite(RELAY_PIN11, 1);
        }  
        if(payload=="0-11")
        {
          digitalWrite(RELAY_PIN11, 0);
        }  
        if(payload=="1-12")
        {
          digitalWrite(RELAY_PIN12, 1);
        }  
        if(payload=="0-12")
        {
          digitalWrite(RELAY_PIN12, 0);
        }  
        if(payload=="1-13")
        {
          digitalWrite(RELAY_PIN13, 1);
        }  
        if(payload=="1-13")
        {
          digitalWrite(RELAY_PIN13, 0);
        }  
        if(payload=="0-14")
        {
          digitalWrite(RELAY_PIN14, 0);
        }  
        if(payload=="1-14")
        {
          digitalWrite(RELAY_PIN14, 1);
        }  
        if(payload=="1-15")
        {
          digitalWrite(RELAY_PIN15, 1);
        }  
        if(payload=="0-15")
        {
          digitalWrite(RELAY_PIN15, 0);
        }  
        if(payload=="1-16")
        {
          digitalWrite(RELAY_PIN16, 1);
        } 
        if(payload=="0-17")
        {
          digitalWrite(RELAY_PIN16, 0);
        } 
        if(payload=="0-18")
        {
          digitalWrite(RELAY_PIN16, 0);
        }     
        if(payload=="0-19")
        {
          digitalWrite(RELAY_PIN16, 0);
        }     
        if(payload=="0-20")
        {
          digitalWrite(RELAY_PIN16, 0);
        }     
        if(payload=="0-21")
        {
          digitalWrite(RELAY_PIN16, 0);
        }           
        
    http.end();   //Close connection
  }  
}
