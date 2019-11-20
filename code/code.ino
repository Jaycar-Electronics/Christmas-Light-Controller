
/* This is very very basic flashing effect, 
  to act as a starting point for you to create your own effects
  
*/
void setup()
{

  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  //show colour 1;
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);

  delay(500); //wait half a second

  //show colour 2:
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(500); //wait half a second

  //any more pattern or changes here...
}