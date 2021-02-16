// deklarasi variabel dan konstanta
int const BUTTON=7, LED1 = 1, LED2 = 2,LED3 = 3,LED4 = 4;
bool setatus;

// void setup : untuk meletakan kode setup yang akan dibaca satu kali
void setup() 
{
  Serial.begin(9600); // kecepatan pengiriman dan penerimaan data melalui kabel serial

  // inisialisasi PIN yang digunakan
  pinMode(BUTTON,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);  
}

// void loop : untuk meletakan kode utama yang akan dibaca berulang - ulang
void loop() 
{
 setatus = digitalRead(BUTTON); // inisialisasi bahwa nilai dari boolean setatus adalah BUTTON

  // perintah jika nilai BUTTON adalah true
 if( BUTTON == 1 ) {
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED3, HIGH);
  delay(2000);
  digitalWrite(LED3, LOW);
  delay(2000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED4, LOW);
 }

  // perintah jika nilai BUTTON adalah false
 else 
 {
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  delay(1000);
  digitalWrite(LED4, HIGH);
  delay(2000);
  digitalWrite(LED4, LOW);
  delay(2000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED3, LOW);
 }

}
