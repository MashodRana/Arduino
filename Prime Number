int key;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    key=Serial.parseInt();
    int i=2;
    for(;i<key;i++){
      if(key%i==0)
        break;
    }
    if(key==i)
      Serial.print("Prime");
    else
      Serial.print("Not Prime");
      
    Serial.read();//clear the incomming Serial buffer
  }

}
