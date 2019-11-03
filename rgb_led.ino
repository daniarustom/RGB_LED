int switch1 = 2;
int Red = 3;
int Green = 6;
int Blue = 5;
int RedSignal = 0;
int GreenSignal = 0;
int BlueSignal = 0;

void setup()
{ 
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(switch1, INPUT);
}

void loop()
{
  RedSignal = map(analogRead(A0), 0, 1024, 0, 255);
  GreenSignal = map(analogRead(A1), 0, 1024, 0, 255);
  BlueSignal = map(analogRead(A2), 0, 1024, 0, 255);

  if(digitalRead(switch1) == HIGH){
    analogWrite(Red, RedSignal);
    analogWrite(Green, GreenSignal);
    analogWrite(Blue, BlueSignal);
  }
  else{
    analogWrite(Red, 0);
    analogWrite(Green, 0);
    analogWrite(Blue, 0);
  }
}