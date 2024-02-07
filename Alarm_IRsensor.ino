const int irPin = 2;
const int buzzPin = 4;
const int ledPin = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(irPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deteksiIR = digitalRead(irPin);
  Serial.println(deteksiIR);
  if (deteksiIR == 1){
    buzzDeactive();
  }
  else if (deteksiIR == 0){
    buzzActive();
  }
  delay(10);
}

void buzzActive(){
  digitalWrite(buzzPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(buzzPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(100);
  digitalWrite(buzzPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(buzzPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(100);
  digitalWrite(buzzPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(buzzPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(100);
  digitalWrite(buzzPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(buzzPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(100);
  digitalWrite(buzzPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(buzzPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(100);
}

void buzzDeactive(){
  digitalWrite(buzzPin, LOW);
  digitalWrite(ledPin, LOW);
}
