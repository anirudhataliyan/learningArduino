int led1=11;
int led2=12;
int led3=10; 
String myLED;
String msg="Enter your led (led1,led2,led3, off): ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
  }

myLED=Serial.readString();

if(myLED=="led1\n"){
  Serial.println("led 1 high");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  
  }
if(myLED=="led2\n"){
    Serial.println("led 2 high");

  digitalWrite(led2,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led3,LOW);
  }
if(myLED=="led3\n"){
  Serial.println("led 3 high");
  digitalWrite(led3,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led1,LOW);
  }
if(myLED=="off\n"){
  digitalWrite(led3,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led1,LOW);  
  }

}
