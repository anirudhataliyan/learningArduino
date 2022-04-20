int led1=2;
int led2=3;
int timee=100;
int yellowBlink=3;
int redBlink=5;
int i,j;

void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=redBlink;j++){
digitalWrite(led1,HIGH);
delay(timee);
digitalWrite(led1,LOW);
delay(timee);
  }
  for(i=1;i<=yellowBlink;i++){
digitalWrite(led2,HIGH);
delay(timee);
digitalWrite(led2,LOW);
delay(timee);
  }
 exit(0);
}
