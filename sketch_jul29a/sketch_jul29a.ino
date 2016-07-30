int ledPin = 13;
int flashLight = 5;

void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin, OUTPUT);
}

void loop() {

//  digitalWrite(ledPin, LOW);
  
//  If check to see if the flashLight integer is equal to the number
//    if (flashLight == 2){
//        digitalWrite(ledPin, HIGH);
//      }

//  Flash the light in pin 13 every second
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
