int pinRele = 3;
int pinButton = 4;
int pinBuzzer = 5;

//Time in minutes
float alarm1 = 3;
float alarm2 = 4;
float bathTime = 5;

//Time in seconds
float alarmTime = 5;

void setup() {
  pinMode(pinRele,OUTPUT);
  pinMode(pinButton,INPUT);
  pinMode(pinBuzzer,OUTPUT);
}

void loop() {
  if(digitalRead(pinButton)){
    digitalWrite(pinRele,HIGH);
    delay(alarm1*1000*60);
    digitalWrite(pinBuzzer,HIGH);
    delay(alarmTime*1000);
    digitalWrite(pinBuzzer,LOW);
    delay((alarm2-(alarm1+alarmTime/60))*1000*60);
    digitalWrite(pinBuzzer,HIGH);
    delay(alarmTime*1000);
    digitalWrite(pinBuzzer,LOW);
    delay((bathTime-(alarm2+alarmTime/60))*1000*60);
    digitalWrite(pinBuzzer,HIGH);
    delay(alarmTime*1000);
    digitalWrite(pinBuzzer,LOW);
    digitalWrite(pinRele,LOW);
  }
  delay(200);
}
