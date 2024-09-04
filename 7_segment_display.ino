const byte Numbers[] = {B00000011, B10011111,
B00001101, 00001101, B10011001, B01001001, B01000001,
B00011111, B00000001, B00001001}; 


void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  DDRC = B11111111;

}

void loop() {
  // put your main code here, to run repeatedly:
  PORTC = B00000000;
  for (int dig1 = 0; dig1 < 10; dig1++) {
    for (int dig2 = 0; dig2 <10; dig2++) {
      for (int repeat = 0; repeat < 100; repeat++) {
        digitalWrite (4, HIGH);
        digitalWrite(5,LOW);
        PORTC = Numbers[dig2];
        delayMicroseconds(700);

        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        PORTC = Numbers[dig1];
        delayMicroseconds(700);
        
      }
    }
  }


}   
