
// deklarasi variabel dan nilai
int  const pina = 3, pinb = 6, pind = 9;
boolean button;
int i;

// function untuk memerintahkan lampu LED menyala
// memberi parameter pada fungsi nyala
void nyala (boolean tombol, int nominal,int const pinawal, int const pinakhir, int lamaLED )  
{

  // kode jika user menekan tombol
 if( tombol == 1 ) 
  {
    for ( nominal = 1 ; nominal <= 2 ;nominal++)
      {
        digitalWrite(pinawal,HIGH);
        delay(lamaLED);
        digitalWrite(pinawal,LOW);
        delay(lamaLED);
      } // batas akhir for 
   } // batas akhir if

   // kode jika user tidak menekan tombol
  else 
    {
      for ( nominal = 1 ; nominal <= 2 ;nominal++)
       {
         digitalWrite(pinakhir,HIGH);
         delay(lamaLED);
         digitalWrite(pinakhir,LOW);
         delay(lamaLED); 
       } // batas akhir for
    
    } // batas akhir else
  
} // batas akhir function nyala

void setup() 
{
  Serial.begin(9600); // kecepatan pengiriman dan penerimaan data melalui port serial

  // menginisialisasikan PIN yang akan digunakan dan memerintahkan dia untuk menjadi output ataupun input
  pinMode(pina, OUTPUT);
  pinMode(pinb, OUTPUT);
  pinMode(pind, INPUT);

}

void loop() 
{
  
  button = digitalRead(pind); // menginisialisasikan bahwa boolean button nilai 0 / 1 nya adalah inputan dari pind
  
  nyala( button, 1,pina,pinb,2000 ); // memanggil function nyala dengan menentukan nilai dari parameternya

}
