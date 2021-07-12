int i=0;
int j=0;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
  
}

void loop()
{
  for(i=1;i<10;i++)
  {
    for(j=1;j<i;j++)
    {
    digitalWrite(j-1, HIGH);
    
    delay(100); // Wait for 1000 millisecond(s)
    }
  }
}
