int Delay = 0;
int Delay0 = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
for(int a=5;a<=10;a++){
  for(int b=0;b<=255;b++){
    analogWrite(a,b);
    delay(Delay0);
  }
  for(int b=255;b>=0;b--){
    analogWrite(a,b);
    delay(Delay0);
  }
  delay(Delay);
}
for(int a=9;a>=3;a--){
  for(int b=0;b<=255;b++){
    analogWrite(a,b);
    delay(Delay0);
  }
  for(int b=255;b>=0;b--){
    analogWrite(a,b);
    delay(Delay0);
  }
  delay(Delay);
}
}
