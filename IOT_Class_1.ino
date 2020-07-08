#define LDR_PIN  A0

void setup() 
{
  Serial.begin(9600);
  //pinMode(LDR_PIN, INPUT);
}

void loop() 
{
  int input = analogRead(LDR_PIN);

  Serial.println(input);

}
