const int led0 = 4;
const int led1 = 5;
const int led2 = 6;
const int led3 = 9;
const int led4 = 10;
const int led5 = 11;
const int pinoE = 2;
const int pinoT = 3;
int dist = 0;
long tempo = 0;

void setup()
{
   Serial.begin(9600);  
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(pinoE, INPUT); 
  pinMode(pinoT, OUTPUT);
}

void loop()
{
    digitalWrite(pinoT, LOW);
    delayMicroseconds(20);
    digitalWrite(pinoT, HIGH);
    delayMicroseconds(20);
    digitalWrite(pinoT, LOW);
    tempo = pulseIn(pinoE,HIGH);
    dist = tempo / 50;
    digitalWrite(led0, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  
if (dist <=300 and dist >=250)
  {
     digitalWrite(led5, HIGH);
  }

if (dist <=250 and dist >=200)
  {
     digitalWrite(led4, HIGH);
  }

if (dist <=200 and dist >=150)
  {
     digitalWrite(led3, HIGH);
  }

if (dist <=150 and dist >=100)
  {
     digitalWrite(led2, HIGH);
  }

if (dist <=100 and dist >=50)
  {
     digitalWrite(led1, HIGH);
  }
  
if (dist < 50) 
  {
   digitalWrite(led0, HIGH);
  }
   delay(50);
} 
