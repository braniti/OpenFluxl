/*
OpenFluxl Arduino Test Code Without Feedback or PID Control
- Idea is to 1st test manual duty cycle regulation via buttons 
  ,(later PID), maximum set to duty cycle 70% ... B.Misovic 

*/
int DriverPin = 3; //PWM Diver PIN 
int button  = 0; 

const float maxD=0.7; float D =0;

int inButtonUP = 8; // button  push PWM UP 
int inButtonDOWN = 11;
 

// button 2
void setup() {

  Serial.begin(9600);  
  pinMode(DriverPin, OUTPUT);
  // declare LED as output
  pinMode(inButtonUP, INPUT); // make button 1 an input
  pinMode(inButtonDOWN, INPUT); // make button 2 an input
  
  // Set PWM frequency for D3  
  TCCR2B = TCCR2B & B11111000 | B00000001; // set timer 2 divisor to 1 for PWM frequency of 31372.55 Hz
  // Start with 0% duty cycle
  analogWrite(DriverPin,0);
 
}

//////////
void loop() { 
// 25% Duty Cycle: 64
// 50% Duty Cycle: 127
// 75% Duty Cycle: 191
// 100% Duty Cycle: 255
  
if (digitalRead(inButtonUP) == LOW) { button++; }
if (digitalRead(inButtonDOWN) == LOW) { button--; }
button = constrain(button, 0, 255);
 
Serial.print(" button perc : " );Serial.print(D);Serial.print( " and value: ");  Serial.println(button) ; 

D= float(button)/float(255) ;  
if ( D>maxD ) {
  button-- ;
  Serial.print(" reached max Duty: " ); Serial.println(maxD) ; 
}
 
analogWrite(DriverPin, button);
// analogWrite(DriverPin,230);// 230/255 is D=90%

delay(100);
}




