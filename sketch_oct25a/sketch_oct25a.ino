void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
}
void satu() {
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
}
void dua() {
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void tiga() {
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
}
void empat() {
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
void lima() {
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
}
void enam() {
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void tujuh() {
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
}
void delapan() {
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
void sembilan() {
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,HIGH);
digitalWrite(6,HIGH);
sembilan();
delay(300);
delapan();
delay(300);
tujuh();
delay(300);
enam();
delay(300);
lima();
delay(300);
empat();
delay(300);
tiga();
delay(300);
dua();
delay(300);
satu();
delay(300);
digitalWrite(8,HIGH);
delay(200);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(5,HIGH);
tujuh();
delay(300);
enam();
delay(300);
lima();
delay(300);
empat();
delay(300);
tiga();
delay(300);
dua();
delay(300);
satu();
delay(300);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(200);
digitalWrite(8,LOW);
digitalWrite(5,LOW);
}
