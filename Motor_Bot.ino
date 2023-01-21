int leftMotor_forward = 9;   
int leftMotor_backward = 10;
int rightMotor_forward = 11;   
int rightMotor_backward = 12;
int leds[] = {1, 2, 3, 4, 5, 6, 7, 8};
int speaker = 13;

int C = 2093;
int D = 2349;
int E = 2637;
int F = 2794;
int G = 3136;
int A = 3520;
int B = 3951;
int C2 = 4186;

void setup(){
  pinMode(speaker, OUTPUT);
  pinMode(leftMotor_forward, OUTPUT);
  pinMode(leftMotor_backward, OUTPUT);
  pinMode(rightMotor_forward, OUTPUT);
  pinMode(rightMotor_backward, OUTPUT);
  //This for loop syntax is only valid for arrays
  for(int led : leds){
    pinMode(led, OUTPUT);
  }
}
void loop(){
  pivotRight(500, leds[0], leds[1]);
  pivotLeft(500, leds[2], leds[3]);
  pivotRight(500, leds[4], leds[5]);
  pivotLeft(500, leds[6], leds[7]);
  zigzagForward(200, leds[0], leds[7]);
  zigzagBackward(200, leds[1], leds[6]);
  zigzagForward(200, leds[2], leds[5]);
  zigzagBackward(200, leds[3], leds[4]);
  octave(200);
  moveForward(1000, leds[0]);
  pivotLeft(800, leds[0], leds[7]);  //pivot 90 degrees CCW
  zigzagForward(200, leds[1], leds[6]);
  pivotLeft(2400, leds[2], leds[5]);  //pivot 270 degrees CCW
  zigzagBackward(200, leds[3], leds[4]);  //is this same distance as moveForward(1000)?
  pivotLeft(2400, leds[0], leds[7]);  //pivot 270 degrees CCW
  zigzagForward(200, leds[1], leds[6]);
  pivotRight(2400, leds[2], leds[5]); //pivot 270 degrees CW
}

void moveForward(int duration, int led){ 
  digitalWrite(led, HIGH);
  digitalWrite(leftMotor_forward, HIGH);
  digitalWrite(leftMotor_backward, LOW);
  digitalWrite(rightMotor_forward, HIGH);
  digitalWrite(rightMotor_backward, LOW);
  delay(duration);
  digitalWrite(led, LOW);
}
void moveBackward(int duration, int led){ 
  digitalWrite(led, HIGH);
  digitalWrite(leftMotor_forward, LOW);
  digitalWrite(leftMotor_backward, HIGH);
  digitalWrite(rightMotor_forward, LOW);
  digitalWrite(rightMotor_backward, HIGH);
  delay(duration);
  digitalWrite(led, LOW);
}

void turnLeft(int duration, int led){ 
  digitalWrite(led, HIGH);
  digitalWrite(leftMotor_forward, LOW);
  digitalWrite(leftMotor_backward, LOW);
  digitalWrite(rightMotor_forward, HIGH);
  digitalWrite(rightMotor_backward, LOW);
  delay(duration);
  digitalWrite(led, LOW);
}
void turnRight(int duration, int led){ 
  digitalWrite(led, HIGH);
  digitalWrite(leftMotor_forward, HIGH);
  digitalWrite(leftMotor_backward, LOW);
  digitalWrite(rightMotor_forward, LOW);
  digitalWrite(rightMotor_backward, LOW);
  delay(duration);
  digitalWrite(led, LOW);
}

void noMotor(int duration)  {
  digitalWrite(leftMotor_forward, LOW);
  digitalWrite(leftMotor_backward, LOW);
  digitalWrite(rightMotor_forward, LOW);
  digitalWrite(rightMotor_backward, LOW);
}

void octave(int delayTime){
  tone(speaker, C);    // Play frequency 2093 - C
  digitalWrite(1, HIGH); 
  delay(delayTime);       // Play for 500 milliseconds
  
  tone(speaker, D);    // Play frequency 2349 - D
  digitalWrite(2, HIGH); 
  delay(delayTime);
  
  tone(speaker, E);    // Play frequency 2637 - E
  digitalWrite(3, HIGH); 
  delay(delayTime);
  
  tone(speaker, F);    // Play frequency 2794 - F
  digitalWrite(4, HIGH); 
  delay(delayTime);
  
  tone(speaker, G);    // Play frequency 3136 - G
  digitalWrite(4, HIGH); 
  delay(delayTime);
  
  tone(speaker, A);    // Play frequency 3520 - A
  digitalWrite(3, HIGH); 
  delay(delayTime);
  
  tone(speaker, B);    // Play frequency 3951 - B
  digitalWrite(2, HIGH); 
  delay(delayTime);
  
  tone(speaker, C2);    // Play frequency 4186 - C2
  digitalWrite(1, HIGH); 
  delay(delayTime);
 
  digitalWrite(4, LOW); 
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);  
  digitalWrite(1, LOW); 

  noTone(speaker);        // Turn speaker off
  delay(delayTime);       // Speaker stays off for 500 milliseconds before the code repeats
}

void pivotRight (int pivotDuration, int led1, int led2){ 
  digitalWrite(leftMotor_forward, HIGH);  
  digitalWrite(leftMotor_backward, LOW);        
  digitalWrite(rightMotor_forward, LOW); 
  digitalWrite(rightMotor_backward, HIGH);  
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH);          
  delay(pivotDuration);             
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void pivotLeft (int pivotDuration, int led1, int led2){ 
  digitalWrite(leftMotor_forward, LOW);  
  digitalWrite(leftMotor_backward, HIGH);         
  digitalWrite(rightMotor_forward, HIGH); 
  digitalWrite(rightMotor_backward, LOW);   
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH);          
  delay(pivotDuration);             
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void zigzagForward (int stride, int led1, int led2){
  int zigZagSteps[] = {1, 2, 3, 4};
  for (int steps : zigZagSteps) {  
    digitalWrite(leftMotor_forward, HIGH);   
    digitalWrite(leftMotor_backward, LOW);        
    digitalWrite(rightMotor_forward, LOW); 
    digitalWrite(rightMotor_backward, LOW); 
    digitalWrite(led1, HIGH);          
    delay(stride);             
    digitalWrite(led1, LOW);          
      
    digitalWrite(leftMotor_forward, LOW);   
    digitalWrite(leftMotor_backward, LOW);        
    digitalWrite(rightMotor_forward, HIGH); 
    digitalWrite(rightMotor_backward, LOW); 
    digitalWrite(led2, HIGH);          
    delay(stride);             
    digitalWrite(led2, LOW);
  }
}

void zigzagBackward (int stride, int led1, int led2){
  int zigZagSteps[] = {1, 2, 3, 4};
  for (int steps : zigZagSteps) {  
    digitalWrite(leftMotor_forward, LOW);   
    digitalWrite(leftMotor_backward, HIGH);         
    digitalWrite(rightMotor_forward, LOW); 
    digitalWrite(rightMotor_backward, LOW); 
    digitalWrite(led1, HIGH);          
    delay(stride);             
    digitalWrite(led1, LOW);          
    
    digitalWrite(leftMotor_forward, LOW);   
    digitalWrite(leftMotor_backward, LOW);        
    digitalWrite(rightMotor_forward, LOW); 
    digitalWrite(rightMotor_backward, HIGH); 
    digitalWrite(led2, HIGH);          
    delay(stride);             
    digitalWrite(led2, LOW);
  }
}
