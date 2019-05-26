int vet_leds [15] = { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, A1, A2, A3, A4, A5};
int Botao1 = A0;
int Botao2 = 3;
int tempo = 15;

void setup() {
  // put your setup code here, to run once:
  pinMode(Botao1, INPUT);
  pinMode(Botao2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void troca_ida(int init){
  //verde para vermelho
  digitalWrite(vet_leds[init-1], HIGH);
  digitalWrite(vet_leds[init], LOW);
}

void troca_volta(int init){
  //vermelho para verde
  digitalWrite(vet_leds[init], HIGH);
  digitalWrite(vet_leds[init-1], LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  int pontos = 0;
  int cam;//1 para ida e 0 para volta
  digitalWrite(vet_leds[0], LOW);
  digitalWrite(vet_leds[1], LOW);
  digitalWrite(vet_leds[2], LOW);
  digitalWrite(vet_leds[3], LOW);
  digitalWrite(vet_leds[4], LOW);
  digitalWrite(vet_leds[5], LOW);
  digitalWrite(vet_leds[6], LOW);
  digitalWrite(vet_leds[7], LOW);
  digitalWrite(vet_leds[8], LOW);
  digitalWrite(vet_leds[9], LOW);
  digitalWrite(vet_leds[10], LOW);
  digitalWrite(vet_leds[11], LOW);
  digitalWrite(vet_leds[12], LOW);
  digitalWrite(vet_leds[13], LOW);
  digitalWrite(vet_leds[14], LOW);
  for(i = 15; i > 0; i--){
    cam = 1;
    troca_ida(i);
    if(digitalRead(Botao1) == HIGH) break;
    delay(tempo);
    if(digitalRead(Botao1) == HIGH) break;
    delay(tempo);
    if(digitalRead(Botao1) == HIGH) break;
    delay(tempo);
  }
  if(digitalRead(Botao1) == LOW){
    for(i = 1; i < 14; i++){
      cam = 0;
      troca_volta(i);
      if(digitalRead(Botao1) == HIGH) break;
      delay(tempo);
      if(digitalRead(Botao1) == HIGH) break;
      delay(tempo);
      if(digitalRead(Botao1) == HIGH) break;
      delay(tempo);
    }
  }
  if(digitalRead(Botao1) == HIGH){
    while(digitalRead(Botao1) == HIGH){
      digitalWrite(vet_leds[0], LOW);
      digitalWrite(vet_leds[1], LOW);
      digitalWrite(vet_leds[2], LOW);
      digitalWrite(vet_leds[3], LOW);
      digitalWrite(vet_leds[4], LOW);
      digitalWrite(vet_leds[5], LOW);
      digitalWrite(vet_leds[6], LOW);
      digitalWrite(vet_leds[7], LOW);
      digitalWrite(vet_leds[8], LOW);
      digitalWrite(vet_leds[9], LOW);
      digitalWrite(vet_leds[10], LOW);
      digitalWrite(vet_leds[11], LOW);
      digitalWrite(vet_leds[12], LOW);
      digitalWrite(vet_leds[13], LOW);
      digitalWrite(vet_leds[14], LOW);
      digitalWrite(vet_leds[i-cam], HIGH);
    }
    delay(3000);
    digitalWrite(vet_leds[0], LOW);
    digitalWrite(vet_leds[1], LOW);
    digitalWrite(vet_leds[2], LOW);
    digitalWrite(vet_leds[3], LOW);
    digitalWrite(vet_leds[4], LOW);
    digitalWrite(vet_leds[5], LOW);
    digitalWrite(vet_leds[6], LOW);
    digitalWrite(vet_leds[7], LOW);
    digitalWrite(vet_leds[8], LOW);
    digitalWrite(vet_leds[9], LOW);
    digitalWrite(vet_leds[10], LOW);
    digitalWrite(vet_leds[11], LOW);
    digitalWrite(vet_leds[12], LOW);
    digitalWrite(vet_leds[13], LOW);
    digitalWrite(vet_leds[14], LOW);
    delay(3000);
  }
 
  if (i == -1){
    i=14;
  }

  /*
  if(digitalRead(Botao1) == HIGH){
    while(digitalRead(Botao1) == HIGH){
      digitalWrite(vet_leds[0], HIGH);
      digitalWrite(vet_leds[1], LOW);
      digitalWrite(vet_leds[14], LOW);
      
      if(digitalRead(Botao1) == LOW) break;
      delay(tempo);
      digitalWrite(vet_leds[14], LOW);
      digitalWrite(vet_leds[0], LOW);
      digitalWrite(vet_leds[1], HIGH);
      if(digitalRead(Botao1) == LOW) break;
      delay(tempo);
    }
  }
  else if(digitalRead(Botao1) == LOW){
    while(digitalRead(Botao1) == LOW){
      digitalWrite(vet_leds[14], HIGH);
      digitalWrite(vet_leds[13], LOW);
      digitalWrite(vet_leds[0], LOW);
      
      if(digitalRead(Botao1) == HIGH) break;
      delay(tempo);
      digitalWrite(vet_leds[14], LOW);
      digitalWrite(vet_leds[13], HIGH);
      if(digitalRead(Botao1) == HIGH) break;
      delay(tempo);
    
    }
  }
  */
  
}
