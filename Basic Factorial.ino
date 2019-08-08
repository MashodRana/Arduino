int key;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    key=Serial.parseInt();
    int fact=1;
    for(int i=1;i<=key;i++){
      fact*=i;
    }
    Serial.println(fact);
    Serial.read();//clear the incomming Serial buffer
  }

}
