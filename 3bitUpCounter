int l1=10;
int l2=11;
int l3=12;
int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(i<4)
    digitalWrite(l1,LOW);
  else
    digitalWrite(l1,HIGH);
    
  if(i==2 || i==3 || i==6 || i==7)
    digitalWrite(l2,HIGH);
  else
    digitalWrite(l2,LOW);
    
  if(i%2==0)
    digitalWrite(l3,LOW);
  else
    digitalWrite(l3,HIGH);

  delay(1000);
  i+=1;
  i=i%8;

}
