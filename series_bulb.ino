

void setup() {

 
  Serial.begin(9600);
  pinMode(9, INPUT);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  pinMode(2, OUTPUT);
  pinMode(3, INPUT);

  // put your setup code here, to run once:

}

int flag = 0;
void loop() {

  digitalWrite(2, LOW);
  digitalWrite(2, HIGH);
  delayMicroseconds(20);
  digitalWrite(2, LOW);

  long time = pulseIn(3, HIGH);

  long distance = (time * 340)/2000;
  Serial.println(time);
  Serial.println(distance);

  if(distance<100)
  {
    //single led logic
  }
  else if(distance<200)
  {
    //two led logic
  }
  else if(distance<300)
  {
    //three led logic
  }
  else
  {
    //four led logic
  }

  int a = digitalRead(9);
  if(a==1)
  {
    Serial.println("Buton Pressed...");
    flag = !flag;
  }
  if(flag)
  {
    //implement pattern 1 here
  }
  else
  {
    //implement patern 2 here 
  }
  delay(500);
  // put your main code here, to run repeatedly:

}
