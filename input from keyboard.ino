int Pin = 13;
char inp;

bool flag = false;

void setup() {
 // initialize serial communication:
 Serial.begin(9600);
 // initialize the LED pin as an output:
 pinMode(Pin, OUTPUT);
}

void loop() {
 // see if there's incoming serial data:
 if (Serial.available() > 0) {
   // read the oldest byte in the serial buffer:
   inp = Serial.read();
   if (inp=='m')
     flag = HIGH;
   else
     flag = LOW;
   digitalWrite(Pin, flag);
 }
}
