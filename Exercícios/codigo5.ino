void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  digitalWrite(4, HIGH);
}
int var;
void loop()
{
  var = digitalRead(5);
  if(var){
         digitalWrite(4, LOW);
   }
} 
