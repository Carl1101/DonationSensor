int light1 = 7;
int light2 = 8;
int light3 = 9;
int light4 = 10;
int sense = 0;
int hold = 720;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
  pinMode(light4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(sense)); 
    

    if(analogRead(sense) < hold ){
        digitalWrite(light1, LOW);
        digitalWrite(light2, LOW);
        digitalWrite(light3, LOW);
        digitalWrite(light4, LOW);
    }else{
      
      for(int i = 0; i < 4; i++) {
        digitalWrite(light1, HIGH);
        delay(100);
        digitalWrite(light1, LOW);
        delay(100);
        digitalWrite(light2, HIGH);
        delay(100);
        digitalWrite(light2, LOW);
        delay(100);        
        digitalWrite(light3, HIGH);
        delay(100);
        digitalWrite(light3, LOW);
        delay(100);        
        digitalWrite(light4, HIGH);
        delay(100);
        digitalWrite(light4, LOW);
        delay(100);
      }
    }

    //delay(100);
}
