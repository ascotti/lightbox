int inByte;
int outByte;

void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop(){
     {
  Serial.write(outByte);
  //outByte++;
  outByte= analogRead(A1);
  delay(25);
}
  if(Serial.available() > 0){
    inByte = Serial.read();
  }
  if(inByte > 128){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }

}

