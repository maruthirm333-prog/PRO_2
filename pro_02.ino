const int button = 18;
const int led = 23;

void setup()
{
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop()
{
  int buttonState = digitalRead(button);

  if (buttonState == LOW)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}