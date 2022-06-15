#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <DHT.h>
#include "index.h"
#define LED 16 //D0 pin
#define PIRPIN 5 //D1 pin
#define trig_pin 4 // D2 pin
#define echo_pin 0 // D3 pin
#define DHTPIN 2 // D4 pin 
#define MQPIN A0 //A0 pin
#define SWITCH_PIN 14// D5 pin
#define FAN_PIN 12// D6 pin
#define CHIMNI_PIN 13 // D7 pin
#define FRIDGE_PIN 15 // D8 pin
#define BUZ 14


const char* ssid = "Honor8X";
const char* password = "nime4302";

DHT dht(DHTPIN, DHT11);

ESP8266WebServer server(80);

void handleRoot() 
{
 String s = webpage;
 server.send(200, "text/html", s);
}

void readTemperature_data() 
{
 float t = dht.readTemperature();
 String temp_value = String(t);
 server.send(200,"text/plane",temp_value);
}
void readHumidity_data(){
  float h = dht.readHumidity();
  String humi_value = String(h);
  server.send(200,"text/plane",humi_value);
}
void readMQ135_data(){
  double a = analogRead(A0);
  String q = String(a);
  server.send(200,"text/plane",q);
}

void led_control() 
{
 String state = "OFF";
 String act_state = server.arg("state");
 if(act_state == "1")
 {
  digitalWrite(LED,HIGH); //LED ON
  state = "ON";
 }
 else
 {
  digitalWrite(LED,LOW); //LED OFF
  state = "OFF";
 }
 
 server.send(200, "text/plane", state);
}


void switch_control(){
  String state = "OFF";
  String act_state = server.arg("state");
  if(act_state == "1"){
    digitalWrite(SWITCH_PIN, HIGH);
    state = "ON";
  }
  else{
   digitalWrite(SWITCH_PIN,LOW);
   state = "OFF"; 
  }
}

void fan_control(){
  String state = "OFF";
  String act_state = server.arg("state");
  if(act_state == "1"){
    digitalWrite(FAN_PIN, HIGH);
    state = "ON";
  }
  else{
   digitalWrite(FAN_PIN,LOW);
   state = "OFF"; 
  }
}

void chimni_control(){
  String state = "OFF";
  String act_state = server.arg("state");
  if(act_state == "1"){
    digitalWrite(CHIMNI_PIN, HIGH);
    state = "ON";
  }
  else{
   digitalWrite(CHIMNI_PIN,LOW);
   state = "OFF"; 
  }
}
void fridge_control(){
  String state = "OFF";
  String act_state = server.arg("state");
  if(act_state == "1"){
    digitalWrite(FRIDGE_PIN, HIGH);
    state = "ON";
  }
  else{
   digitalWrite(FRIDGE_PIN,LOW);
   state = "OFF"; 
  }
}
void setup(void)
{
  
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  Serial.println("");
  pinMode(LED,OUTPUT); 
  pinMode(PIRPIN,INPUT);
  
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("Temperature: ");
  Serial.print(dht.readTemperature());
  Serial.print("Humidity: ");
  Serial.println(dht.readHumidity());
  Serial.print("Air Quality: ");
  long s = digitalRead(PIRPIN);
  if(s == HIGH){
    digitalWrite(BUZ, HIGH);
  }
  else{
    digitalWrite(BUZ, LOW);
  }
  float a = analogRead(A0);
  Serial.println(a);
  server.on("/", handleRoot);
  server.on("/led_set", led_control);
  server.on("/switch_set",switch_control);
  server.on("/fan_set",fan_control);
  server.on("/chimni_set",chimni_control);
  server.on("/fridge_set",fridge_control);
  server.on("/tempread", readTemperature_data);
  server.on("/humiread",readHumidity_data);
  server.on("/mq135read",readMQ135_data);
  server.begin();
}

void loop(void)
{
  server.handleClient();   
}
