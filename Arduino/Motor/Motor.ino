long encpin=3,pwmpin=6,enccnt=0,spee=0;

void setup() {
  Serial.begin(9600);
  pinMode(pwmpin,OUTPUT);
  pinMode(encpin,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(encpin),func,FALLING);
//   put your setup code here, to run once:
  
}

void loop() {
  analogWrite(pwmpin,105);
//   put your main code here, to run repeatedly:
//  delay(10);
}

void func()
{
  enccnt++;
  Serial.println(enccnt);
}

