int ledPin = 12;
int sensorPin = A0;

double alpha = 0.75;
int period = 20;
double change = 0.0;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  static double oldValue = 0;
  static double oldChange = 0;
  int rawValue = analogRead(sensorPin);
  double value = alpha * oldValue + (1 - alpha) * rawValue;
  change = // 추가
  
  digitalWrite(ledPin, /* 추 가 */ );
  
  oldValue = value;
  oldChange = // 추가
  delay(period); 
}
