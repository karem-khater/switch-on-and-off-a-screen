int led = 6;
int button=5;
int Reading=0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
Reading=digitalRead(button);
  if(Reading==HIGH){
    digitalWrite(led,HIGH);
    delay(5000);}
  else{digitalWrite(led,LOW);}
}
