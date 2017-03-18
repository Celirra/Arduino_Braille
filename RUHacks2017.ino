// Kevin Freeman
// Software Engineering Student at UWO
// Made for RUHacks 2017
// March 18, 2017
// github.com/Celirra


char receivedChar;  // The character received from the Serial input
boolean newData = false;  // Records whether or not there is a new character to be displayed

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Simple initialization
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void recvOneChar() {
  // Read one character from the Serial input
  Serial.println("a");
  if (Serial.available() > 0) {
    receivedChar = Serial.read();
    // inform that there is a new character to be displayed
    newData = true;
  }
  
}



void cInput(char c) {
  // obtained input
  // PIN LAYOUT:
  // ********
  // * 2  5 *
  // * 3  6 *
  // * 4  7 *
  // ********

  // Upper case checking (upper case in braille has bottom-right as ON before displaying the character)
  if (c >= 65 && c <= 90){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(1000);
      c += 32;
  }
  
    // Numeric checking (numeric in braille has pins 4, 5, 6, 7 as ON before displaying the character)
  if (c >= 49 && c <=57){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
      c+= 48;
  }
      // Zero checking (numeric in braille has pins 4, 5, 6, 7 as ON before displaying the character)
  if (c == 48){
          digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
      c+= 58;
  }

  // Simple switch:case method to determine character to be displayed. Character c is the sent variable, where each case determines the character in question.
  switch (c) {
    case 'a':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'b':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'c':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'd':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'e':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'f':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'g':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'h':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'i':
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'j':
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'k':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'l':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'm':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'n':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'o':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'p':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 'q':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'r':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 's':
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case 't':
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case 'u':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      break;
    case 'v':
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      break;
    case 'w':
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 'x':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      break;
    case 'y':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 'z':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;
    default:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  // Checks and gets the newest character in the Serial output
  recvOneChar();

  // If there was a character recieved from the previous function call
  if (newData) {
    cInput(receivedChar);   // Output the character received from the recvOneChar function call
    newData = false;        // Says that the newest value was displayed.
  }
  delay(1000);       // Delay to ensure that there is no issue when there is a string entered into the Serial instead of a mere character, 
                     // and to gradually display an entire string.
}



