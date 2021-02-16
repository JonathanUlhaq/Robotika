int const PIN = 5;// inisialisasi  konstan PIN type data int bernilai 5

// void setup : untuk meletakan kode setup yang akan dibaca satu kali
void setup() {
  Serial.begin(9600); // kecepatan pengiriman dan penerimaan data melalui port serial
  
}

// void loop : untuk meletakan kode utama yang akan dibaca berulang - ulang
void loop() {
  
  analogWrite(PIN, HIGH);  //Menggerakan Motor DC pada pin PWM 5 dengan kecepatan penuh

}
