 const int leftFrontLED = 6;
const int leftMidLED = 5;
const int leftBackLED = 4;
const int rightFrontLED = 3;
const int rightMidLED = 2;
const int rightBackLED = 1;
const int midLED = 0;

const int leftFrontButton = 7;
const int leftMidButton = 8;
const int leftBackButton = 9;
const int rightFrontButton = 10;
const int rightMidButton = 11;
const int rightBackButton = 12;
const int midButton = A0;

void setLED(int buttonPin, int ledPin){
  int buttonState = 0;
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonPin + " " + ledPin);  
  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
void setup() {
  // put your setup code here, to run once:
  pinMode(leftFrontLED, OUTPUT);
  pinMode(leftMidLED, OUTPUT);
  pinMode(leftBackLED, OUTPUT);
  pinMode(rightFrontLED, OUTPUT);
  pinMode(rightMidLED, OUTPUT);
  pinMode(rightBackLED, OUTPUT);
  pinMode(midLED, OUTPUT);
  
  pinMode(leftFrontButton, INPUT);
  pinMode(leftMidButton, INPUT);
  pinMode(leftBackButton, INPUT);
  pinMode(rightFrontButton, INPUT);
  pinMode(rightMidButton, INPUT);
  pinMode(rightBackButton, INPUT);
  pinMode(midButton, INPUT);
  Serial.begin(9600); 
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  // setLED(leftFrontButton, leftFrontLED);
   /*
   setLED(leftMidButton, leftMidLED);
   setLED(leftBackButton, leftBackLED);
   setLED(rightFrontButton, rightFrontLED);
   setLED(rightMidButton, rightMidLED);
   setLED(rightBackButton, rightBackLED);
   setLED(midButton, midLED);
    */
  delay(50);
}
