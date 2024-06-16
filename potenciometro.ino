void setup() {
  Serial.begin(9600);
  for(int a = 2; a <= 11; a++) {
    pinMode(a, OUTPUT);
  } 
}

void loop() {
  float valor = analogRead(5);
  float voltaje = ((valor * 5) / 1023);
  Serial.println(voltaje);

  for(int a = 2; a <= 10; a++) {
    if(voltaje >= 0.5) {
      digitalWrite(2, HIGH);
    } else {
      digitalWrite(2, LOW);
    }
    if(voltaje >= 1.0) {
      digitalWrite(3, HIGH);
    } else {
      digitalWrite(3, LOW);
    }
    if(voltaje >= 1.5) {
      digitalWrite(4, HIGH);
    } else {
      digitalWrite(4, LOW);
    }
    if(voltaje >= 2.0) {
      digitalWrite(5, HIGH);
    } else {
      digitalWrite(5, LOW);
    }
    if(voltaje >= 2.5) {
      digitalWrite(6, HIGH);
    } else {
      digitalWrite(6, LOW);
    }
    if(voltaje >= 3.0) {
      digitalWrite(7, HIGH);
    } else {
      digitalWrite(7, LOW);
    }
    if(voltaje >= 3.5) {
      digitalWrite(8, HIGH);
    } else {
      digitalWrite(8, LOW);
    }
    if(voltaje >= 4.0) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }
    if(voltaje >= 4.5) {
      digitalWrite(10, HIGH);
    } else {
      digitalWrite(10, LOW);
    }
    if(voltaje >= 5.0) {
      digitalWrite(11, HIGH);
    } else {
      digitalWrite(11, LOW);
    }
  }
}
