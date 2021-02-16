// deklarasi konstan
int const  Pin1=1,Pin2=2,Pin3=3,Pin4=4,Pin5=5,Pin6=6;

// void setup : untuk meletakan kode setup yang akan dibaca satu kali
void setup() {

  // kecepatan pengiriman dan penerimaan data melalui port serial
  Serial.begin (9600); 

  // Deklarasi bagian PIN yang akan dipasang lampu LED
  pinMode(Pin1,OUTPUT);
  pinMode(Pin2,OUTPUT);
  pinMode(Pin3,OUTPUT);
  pinMode(Pin4,OUTPUT);
  pinMode(Pin5,OUTPUT);
  pinMode(Pin6,OUTPUT);
  }

// void loop : untuk meletakan kode utama yang akan dibaca berulang - ulang
void loop() {
  
  //perintah untuk lampu yang berada di PIN ganjil menyala dan PIN genap Mati dengan delay 1 detik
  digitalWrite(Pin1,HIGH);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin5,HIGH);
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin4,LOW);
  digitalWrite(Pin6,LOW);
  delay(1000);

  //perintah untuk lampu yang berada di PIN genap menyala dan PIN ganjil mati dengan delay 1 detik
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin4,HIGH);
  digitalWrite(Pin6,HIGH);
  digitalWrite(Pin1,LOW);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin5,LOW);
  delay(1000);

  }
