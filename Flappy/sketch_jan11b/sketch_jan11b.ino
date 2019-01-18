int BUTTON1 = 13;

void setup(){

Serial.begin(9600);

pinMode(BUTTON1,INPUT);

}

void loop(){

Serial.println( );

if(digitalRead(BUTTON1) == HIGH)

{ Serial.println("1");

}else{

Serial.println("2");

} delay(400);

}
