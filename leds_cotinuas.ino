void setup() {
for(int a=1; a<=10; a++){pinMode(a,OUTPUT);}  
}

void loop() {
for(int contar=1; contar<=10; contar++)
  {digitalWrite(contar,HIGH); 
  delay(400); 
  digitalWrite(contar,LOW);
  delay(500);
  }
for (int contar=10; contar>=1; contar--)
    {digitalWrite(contar,HIGH); 
  delay(400); 
  digitalWrite(contar,LOW);
  delay(500);}
}


