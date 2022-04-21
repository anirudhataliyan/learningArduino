int led1=2;
int led2=3;
int i=0,j=0;
int delaytime=100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(i<=10){
  digitalWrite(led1,HIGH);
  delay(delaytime);
  digitalWrite(led1,LOW);
  delay(delaytime);
  i++;

  }
while(j<=5){
  digitalWrite(led2,HIGH);
  delay(delaytime);
  digitalWrite(led2,LOW);
  delay(delaytime);
  j++;
  }
  exit(0);
}
