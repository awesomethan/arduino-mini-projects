int speaker = 13;
int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int E3 = 165;
int G3 = 196;
#define A3 220
int B3 = 247;
int C4 = 262;
int CS4 = 277;
int D4 = 294;
int E4 = 330;
int F4 = 349;
int FS4 = 370;
int G4 = 392;

void setup() {
  // put your setup code here, to run once:
  pinMode(speaker, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  for (int i = 0; i < 3; i++)  {
    digitalWrite(led1, HIGH);
    tone(speaker, G3);
    delay(400);
    digitalWrite(led1, LOW);
    noTone(speaker);
    delay(200);
  }

  digitalWrite(led2, HIGH);
  tone(speaker, E3);
  delay(300);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(150);

  digitalWrite(led3, HIGH);
  tone(speaker, B3);
  delay(100);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led1, HIGH);
  tone(speaker, G3);
  delay(400);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(200);

  digitalWrite(led2, HIGH);
  tone(speaker, E3);
  delay(300);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(150);

  digitalWrite(led3, HIGH);
  tone(speaker, B3);
  delay(100);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led1, HIGH);
  tone(speaker, G3);
  delay(800);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(400);

//NEW SECTION

  for (int i = 0; i < 3; i++)  {
    digitalWrite(led4, HIGH);
    tone(speaker, D4);
    delay(400);
    digitalWrite(led4, LOW);
    noTone(speaker);
    delay(200);
  }

  digitalWrite(led1, HIGH);
  tone(speaker, E4);
  delay(300);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(150);

  digitalWrite(led2, HIGH);
  tone(speaker, B3);
  delay(100);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led3, HIGH);
  tone(speaker, G3);
  delay(400);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(200);

  digitalWrite(led1, HIGH);
  tone(speaker, E3);
  delay(300);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(150);

  digitalWrite(led2, HIGH);
  tone(speaker, B3);
  delay(100);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led3, HIGH);
  tone(speaker, G3);
  delay(800);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(400);

//NEW SECTION




  digitalWrite(led4, HIGH);
  tone(speaker, G4);
  delay(400);
  digitalWrite(led4, LOW);
  noTone(speaker);
  delay(200);

  digitalWrite(led1, HIGH);
  tone(speaker, G3);
  delay(200);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led1, HIGH);
  tone(speaker, G3);
  delay(150);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(75);

  digitalWrite(led4, HIGH);
  tone(speaker, G4);
  delay(400);
  digitalWrite(led4, LOW);
  noTone(speaker);
  delay(200);

  digitalWrite(led4, HIGH);
  tone(speaker, FS4);
  delay(250);
  digitalWrite(led4, LOW);
  noTone(speaker);
  delay(125);

  digitalWrite(led3, HIGH);
  tone(speaker, F4);
  delay(200);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led2, HIGH);
  tone(speaker, E4);
  delay(100);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led1, HIGH);
  tone(speaker, D4);
  delay(100);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led2, HIGH);
  tone(speaker, E4);
  delay(200);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(300);

//NEW SECTION

  digitalWrite(led2, HIGH);
  tone(speaker, G3);
  delay(200);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led4, HIGH);
  tone(speaker, CS4);
  delay(400);
  digitalWrite(led4, LOW);
  noTone(speaker);
  delay(200);

  digitalWrite(led3, HIGH);
  tone(speaker, C4);
  delay(250);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(125);

  digitalWrite(led3, HIGH);
  tone(speaker, B3);
  delay(200);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led3, HIGH);
  tone(speaker, B3);
  delay(100);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led2, HIGH);
  tone(speaker, A3);
  delay(100);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(50);

  digitalWrite(led3, HIGH);
  tone(speaker, B3);
  delay(200);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(300);

//NEW SECTION

  digitalWrite(led1, HIGH);
  tone(speaker, E3);
  delay(200);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led2, HIGH);
  tone(speaker, G3);
  delay(400);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(200);

  digitalWrite(led1, HIGH);
  tone(speaker, E3);
  delay(200);
  digitalWrite(led1, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led2, HIGH);
  tone(speaker, G3);
  delay(200);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led3, HIGH);
  tone(speaker, B3);
  delay(400);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(200);

  digitalWrite(led2, HIGH);
  tone(speaker, G3);
  delay(200);
  digitalWrite(led2, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led3, HIGH);
  tone(speaker, B3);
  delay(200);
  digitalWrite(led3, LOW);
  noTone(speaker);
  delay(100);

  digitalWrite(led4, HIGH);
  tone(speaker, D4);
  delay(800);
  digitalWrite(led4, LOW);
  noTone(speaker);
  delay(200);
}
