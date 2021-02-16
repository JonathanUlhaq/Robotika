#include <Servo.h> // memanggil library servo ke dalam program 
Servo menggerakanServo;     // dekralasi Servo dengan nama menggerakanServo

int const pinPWM = 6; // deklarasi konstan

// void setup : untuk meletakan kode setup yang akan dibaca satu kali
void setup(){ 
  
  Serial.begin(9600); // kecepatan pengiriman dan penerimaan data melalui port serial
  menggerakanServo.attach(pinPWM); //Servo dikonekkan dengan pinPWM ( 6 )
  } 

// void loop : untuk meletakan kode utama yang akan dibaca berulang - ulang
void loop(){ 
  
  menggerakanServo.write(0); // menggerakan servo pada sudut 0 derajat
  delay(1000);               // waktu bergerak adalah 1 detik

  menggerakanServo.write(45); // menggerakan servo pada sudut 45 derajat
  delay (1000);               // waktu bergerak adalah 1 detik

  menggerakanServo.write(90); // menggerakan servo pada sudut 90 derajat
  delay (1000);               // waktu bergerak adalah 1 detik

  menggerakanServo.write(180); // menggerakan servo pada sudut 180 derajat
  delay (1000);                // waktu bergerak adalah 1 detik
  }
