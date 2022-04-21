int myBlinks;
String msg="How many Blinks you want: ";
int j;
int delayTime=100;
int led1=2;

void setup(){
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){

  }
myBlinks=Serial.parseInt();
for(j=1;j<=myBlinks;j++){
    digitalWrite(led1,HIGH);
    delay(delayTime);
    digitalWrite(led1,LOW);
    delay(delayTime);

  }
 exit(0);
}
