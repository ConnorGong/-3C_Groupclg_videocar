const int w1_f = P2_3;
const int w1_b = P2_4;
const int w2_f = P2_0;
const int w2_b = P2_1;
const int w3_f = P1_5;
const int w3_b = P1_4;
const int inputPin = P1_6;
const int outputPin = P1_7;
char order = '2';


void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (w1_f, OUTPUT);
  pinMode (w1_b, OUTPUT);
  pinMode (w2_f, OUTPUT);
  pinMode (w2_b, OUTPUT);
  pinMode (w3_f, OUTPUT);
  pinMode (w3_b, OUTPUT);
  pinMode (inputPin, INPUT);
  pinMode (outputPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  if (Serial.available () > 0) {
    order = Serial.read ();
    if (order == '1') {
      digitalWrite (w1_f, LOW);
      digitalWrite (w1_b, LOW);
      digitalWrite (w2_f, HIGH);
      digitalWrite (w2_b, LOW);
      digitalWrite (w3_f, HIGH);
      digitalWrite (w3_b, LOW);
    }
    if (order == '2') {
      digitalWrite (w1_f, HIGH);
      digitalWrite (w1_b, LOW);
      digitalWrite (w2_f, LOW);
      digitalWrite (w2_b, HIGH);
      digitalWrite (w3_f, HIGH);
      digitalWrite (w3_b, LOW);
    }
    if (order == '3') {
      digitalWrite (w1_f, LOW);
      digitalWrite (w1_b, LOW);
      digitalWrite (w2_f, LOW);
      digitalWrite (w2_b, LOW);
      digitalWrite (w3_f, LOW);
      digitalWrite (w3_b, LOW);
    }
    if (order == '4') {
      digitalWrite (w1_f, LOW);
      digitalWrite (w1_b, HIGH);
      digitalWrite (w2_f, HIGH);
      digitalWrite (w2_b, LOW);
      digitalWrite (w3_f, LOW);
      digitalWrite (w3_b, HIGH);
    }
    if (order == '5') {
      digitalWrite (w1_f, LOW);
      digitalWrite (w1_b, LOW);
      digitalWrite (w2_f, LOW);
      digitalWrite (w2_b, HIGH);
      digitalWrite (w3_f, LOW);
      digitalWrite (w3_b, HIGH);
    }
  }
}
