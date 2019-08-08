int l1=10;
int l2=11;
int l3=12;
int l4=13;
int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(i<8)
    digitalWrite(l1,LOW);
  else
    digitalWrite(l1,HIGH);

  if(4<=i<=7 && 12<=i<=15)
    digitalWrite(l2,HIGH);
  else
    digitalWrite(l2,LOW);
    
  if(i==2 || i==3 || i==6 || i==7 || i==10 || i==11 || i==14 || i==15)
    digitalWrite(l3,HIGH);
  else
    digitalWrite(l3,LOW);
    
  if(i%2==0)
    digitalWrite(l4,LOW);
  else
    digitalWrite(l4,HIGH);

  delay(1000);
  i+=1;
  i=i%8;

}
