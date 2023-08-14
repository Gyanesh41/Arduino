void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}
long  x=150000;//150000
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  if (x>4500){
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    delay(200);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    delay(1800);
    x=x-500;}
  else if ((x>500) &&(x<=4500)){
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    delay(200);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    delay(300);
    x=x-100;
  }
  else if((x>2)&&(x<=500)){
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    delay(x);
    x-=5;
  }
  else{
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    while(1){Serial.println("");};};
}
