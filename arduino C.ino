// C++ code
//
int push = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}
void loop()
{
  push = digitalRead(2);
  Serial.print(push);
  Serial.print("   ");
  if (push == 1 ) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); 
}
