int ledPin = 13;
int test = 10;
int i;
int counter = 0;

int incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin, OUTPUT);
//    Test with the serial and loging 
    Serial.begin(9600);
//    Serial.println("Here is a log to the Serial");
    delay(1000);
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


// Use an outside function to make the 13th pin flash
//outsideFunction();
//delay(1000);
//outsideFunction();
//delay(1000);


// Add one second to the counter integer every time it runs through the loop
//counter++;
//Serial.println(counter);
//if (counter == 25) {
//  counter = 0;
//  }
//  delay(1000);


// Use the outside function to flash a light every time the counter reaches 25
//counter++;
//Serial.println(counter);
//if (counter == 25) {
//  counter = 0;
//  outsideFunction();
//  }
//  delay(1000);


// Write an input from the user into the serial
if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print("! ");
    Serial.write(incomingByte);
  }
}

void outsideFunction(){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
