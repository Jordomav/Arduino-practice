int ledPin = 13;
int test = 10;
int i;

void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin, OUTPUT);
    
}

void loop() {
  
  
//  If check to see if the flashLight integer is equal to the number
//    if (flashLight == 5){
//        digitalWrite(ledPin, HIGH);
//      }

//  Flash the light in pin 13 every second
//    digitalWrite(ledPin, HIGH);
//    delay(1000);
//    digitalWrite(ledPin, LOW);
//    delay(1000);
    
outsideFunction();
delay(1000);
outsideFunction();
delay(1000);

}

void outsideFunction(){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
