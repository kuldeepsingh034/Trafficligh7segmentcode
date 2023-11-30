
int a=2,b=3,c=4,d=5,e=6,f=7,g=8;
int COUNT;
int red=A1,yellow=A2,green=A3;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}
 
void loop()
{
 analogWrite(red,0);
 analogWrite(yellow,0);
 analogWrite(green,0);

 analogWrite(yellow,0);
 analogWrite(red,255);
 timer(9);

 
 analogWrite(red,0);
 analogWrite(yellow,255);
 timer(3);
 
 analogWrite(yellow,0);
 analogWrite(green,255);
 timer(9);    
}

void timer(int nu)
 {
   for(COUNT=nu;COUNT>=0;COUNT--)
    {
      Serial.begin(9600);
      Serial.println(COUNT);
      switch (COUNT)
                {
 
                case 0://when count value is zero show”0” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, HIGH);
                delay(1000);
                break;
 
                case 1:// when count value is 1 show”1” on disp
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                delay(1000);
                break;
 
                case 2:// when count value is 2 show”2” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, HIGH);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, HIGH);
                digitalWrite(g, LOW);
                delay(1000);
                break;
 
                case 3:// when count value is 3 show”3” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, LOW);
                delay(1000);
                break;
 
                case 4:// when count value is 4 show”4” on disp
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                delay(1000);
                break;
 
                case 5:// when count value is 5 show”5” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c,LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                delay(1000);
                break;   

                case 6:// when count value is 1 show”1” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                delay(1000);
                break;
 
                case 7:// when count value is 2 show”2” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                delay(1000);
                break;
 
                case 8:// when count value is 3 show”3” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                delay(1000);
                break;
 
                case 9:// when count value is 4 show”4” on disp
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                delay(1000);
                break;
                }
        }                  
 }