int x0;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    
}

void loop() {
  // put your main code here, to run repeatedly:

  x0 = analogRead(A8);
  x0 *= 1.5;
  //x0 -= 16;
  if(x0<0){
    x0 = 0;
  }
  if(x0 > 255){
    x0 = 255;
  }
  analogWrite(A0,x0);
  Serial.println(x0); 

}
