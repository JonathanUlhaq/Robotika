int const LetakPin = 13; // inisialisasi konstanta LetakPin bertype data int bernilai 13

// void setup : untuk meletakan kode setup yang akan dibaca satu kali
void setup()  
{
   
  Serial.begin(9600); // kecepatan pengiriman dan penerimaan data melalui port serial

  pinMode(LetakPin, OUTPUT); // inisialisasi PIN yang akan digunakan
}
  
// void loop : untuk meletakan kode utama yang akan dibaca berulang - ulang
void loop()  
{
  
  // Menghidupkan LED pada pin digital 13 
  digitalWrite(LetakPin, HIGH);
}
  
