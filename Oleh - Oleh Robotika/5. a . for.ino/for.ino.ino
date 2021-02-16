// deklarasi konstan dan variabel bertype data int
int const pinA = 1, pinB = 2, pinC = 3;
int i = 1;

// void setup : untuk meletakan kode setup yang akan dibaca satu kali
void setup()
{ 
  
  // kecepatan pengiriman dan penerimaan data melalui port serial
  Serial.begin(9600);
 
  // Menentukan PIN digital yang akan digunakan dengan memanggil konstan yang telah dideklarasikan
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
 
} 

// void loop : untuk meletakan kode utama yang akan dibaca berulang - ulang
void loop()
{ 
  
  // perintah untuk mengedipkan LED sebanyak 1 x pada PIN 1 dengan delay 1 detik
  for ( i  ; i <= 1; i++)
  {
    digitalWrite(pinA, HIGH);
    delay(1000);
    digitalWrite(pinA, LOW);
    delay(1000);
  }

  // perintah untuk mengedipkan LED sebanyak 2 x pada PIN 2 dengan delay 1 detik
  for ( i ; i <= 2; i++ ) 
  {
    digitalWrite(pinB, HIGH);
    delay(1000);
    digitalWrite(pinB, LOW);
    delay(1000);
  }
  
  // perintah untuk mengedipkan LED sebanyak 3 x pada PIN 3 dengan delay 1 detik 
  for ( i ; i <= 3; i++ ) 
  {
    digitalWrite(pinC, HIGH);
    delay(1000);
    digitalWrite(pinC, LOW);
    delay(1000);
  }
}
